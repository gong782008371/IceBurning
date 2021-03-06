
#include "Logicserver_Message.h"
#include "MessageRegister.h"

NS_LS_BEGIN

int32_t CMessageHead::Encode(char* out_str, int32_t& out_len) const
{
    if (out_len < Size())
    {
        TRACE_WARN("char array length too short when Encode message head.");
        return fail;
    }

    char* str = out_str;
    int32_t len = 0;
    len += EncodeInt32(str, m_iMessageLen);
    len += EncodeInt32(str, m_iUin);
    len += EncodeInt32(str, m_iMessageID);
    len += EncodeInt32(str, m_iMessageSequece);
    out_len = len;
    return success;
}

int32_t CMessageHead::Decode(const char* in_str, int32_t in_len)
{
    if (in_len < Size())
    {
        TRACE_WARN("char array length is too short when decode message head");
        return fail;
    }
    int32_t len = 0;
    const char* str = in_str;

    m_iMessageLen       = DecodeInt32(str);
    m_iUin              = DecodeInt32(str);
    m_iMessageID        = DecodeInt32(str);
    m_iMessageSequece   = DecodeInt32(str);
    return success;
}

int32_t CMessageHead::Size() const
{
    return sizeof(int32_t) * 4;
}

int32_t CMessageHead::EncodeInt32(char*& str, int32_t value) const
{
    int32_t p = 0xff000000, w = 24;
    value = htonl(value);
    for (int i = 0; i < sizeof(int32_t); ++i)
    {
        *(str++) = (char)( (value & p) >> w );
        p >>= 8;
        w -= 8;
    }
    return sizeof(int32_t);
}

int32_t CMessageHead::DecodeInt32(const char*& str)
{
    int32_t value = 0;
    for (int32_t i = 0; i < sizeof(int32_t); ++i)
    {
        value = (value << 8) | (unsigned char)*(str++);
    }
    value = ntohl(value);
    return value;
}


CMessageBody::~CMessageBody()
{
    delete message;
}

int32_t CMessageBody::Encode(char* out_str, int32_t& out_len) const
{
    if (false == message->SerializeToArray(out_str, out_len))
    {
        return fail;
    }
    out_len = message->ByteSize();
    return success;
}

int32_t CMessageBody::Decode(const char* in_str, int32_t in_len)
{
    if (!message->ParseFromArray(in_str, in_len))
    {
        TRACE_WARN("parse message from array failed.");
        return fail;
    }
    return success;
}


CMessage::~CMessage()
{
    delete m_iMessageHead;
    delete m_iMessageBody;
}

int32_t CMessage::Encode(char* out_str, int32_t& out_len) const
{
    char* str = out_str;

    int32_t head_len = out_len;
    if (m_iMessageHead == NULL)
    {
        TRACE_WARN("Head is NULL when encode message.");
        return fail;
    }
    int32_t result = m_iMessageHead->Encode(str, head_len);
    if (result == fail)
    {
        TRACE_WARN("encode messgae head failed.");
        return fail;
    }

    int32_t body_len = out_len - head_len;
    if (m_iMessageBody == NULL)
    {
        TRACE_WARN("Body is NULL when encode message.");
        return fail;
    }
    result = m_iMessageBody->Encode(&str[head_len], body_len);
    if (result == fail)
    {
        TRACE_WARN("encode messgae body failed.");
        return fail;
    }

    out_len = head_len + body_len;
    return success;
}

int32_t CMessage::Decode(const char* in_str, int32_t in_len)
{
    if (m_iMessageHead == NULL)
    {
        m_iMessageHead = new CMessageHead();
    }
    int32_t head_len = m_iMessageHead->Size();
    if (fail == m_iMessageHead->Decode(in_str, head_len))
    {
        TRACE_WARN("decode message head fail.");
        delete m_iMessageHead;
        return fail;
    }

    if (m_iMessageBody == NULL)
    {
        m_iMessageBody = NewRequestBodyWithMsgID(m_iMessageHead->GetMid());
        if (m_iMessageBody == NULL)
        {
            TRACE_WARN("can not construct MessageBody with msgID(%d), " \
                "please make sure your PB has been registed on this id", m_iMessageHead->GetMid());
            delete m_iMessageHead;
            delete m_iMessageBody;
            return fail;
        }
    }
    int32_t body_len = in_len - head_len;
    if (fail == m_iMessageBody->Decode(&in_str[head_len], body_len))
    {
        TRACE_WARN("decode message body fail.");
        delete m_iMessageHead;
        delete m_iMessageBody;
        return fail;
    }
    return success;
}

void CMessage::SetMessageHead(CMessageHead* head)
{
    m_iMessageHead = head;
}

void CMessage::SetMessageBody(CMessageBody* body)
{
    m_iMessageBody = body;
    ::google::protobuf::Message* pb = m_iMessageBody->GetPB();
    if (pb == NULL)
    {
        TRACE_WARN("pb is NULL when set Message Body");
        return;
    }
    if (m_iMessageHead == NULL)
    {
        TRACE_WARN("msg head is NULL when set Message Body");
        return;
    }
    m_iMessageHead->SetLen(m_iMessageHead->Size() + pb->ByteSize());
    srand(time(NULL));
    m_iMessageHead->SetMsq((int32_t)(time(NULL) << 16) | (1 + rand()));
}

NS_LS_END
