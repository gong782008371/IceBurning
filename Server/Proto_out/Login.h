// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#ifndef PROTOBUF_Login_2eproto__INCLUDED
#define PROTOBUF_Login_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Login_2eproto();
void protobuf_AssignDesc_Login_2eproto();
void protobuf_ShutdownFile_Login_2eproto();

class CSLoginRequest;
class CSLoginResponse;
class CSRoomMessage;
class CSPullRoomsRequest;
class CSPullRoomsResponse;

// ===================================================================

class CSLoginRequest : public ::google::protobuf::Message {
 public:
  CSLoginRequest();
  virtual ~CSLoginRequest();

  CSLoginRequest(const CSLoginRequest& from);

  inline CSLoginRequest& operator=(const CSLoginRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSLoginRequest& default_instance();

  void Swap(CSLoginRequest* other);

  // implements Message ----------------------------------------------

  CSLoginRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSLoginRequest& from);
  void MergeFrom(const CSLoginRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string username = 1;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 1;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:CSLoginRequest)
 private:
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_password();
  inline void clear_has_password();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::std::string* password_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Login_2eproto();
  friend void protobuf_AssignDesc_Login_2eproto();
  friend void protobuf_ShutdownFile_Login_2eproto();

  void InitAsDefaultInstance();
  static CSLoginRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSLoginResponse : public ::google::protobuf::Message {
 public:
  CSLoginResponse();
  virtual ~CSLoginResponse();

  CSLoginResponse(const CSLoginResponse& from);

  inline CSLoginResponse& operator=(const CSLoginResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSLoginResponse& default_instance();

  void Swap(CSLoginResponse* other);

  // implements Message ----------------------------------------------

  CSLoginResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSLoginResponse& from);
  void MergeFrom(const CSLoginResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 uin = 1;
  inline bool has_uin() const;
  inline void clear_uin();
  static const int kUinFieldNumber = 1;
  inline ::google::protobuf::int32 uin() const;
  inline void set_uin(::google::protobuf::int32 value);

  // optional int32 result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CSLoginResponse)
 private:
  inline void set_has_uin();
  inline void clear_has_uin();
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 uin_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Login_2eproto();
  friend void protobuf_AssignDesc_Login_2eproto();
  friend void protobuf_ShutdownFile_Login_2eproto();

  void InitAsDefaultInstance();
  static CSLoginResponse* default_instance_;
};
// -------------------------------------------------------------------

class CSRoomMessage : public ::google::protobuf::Message {
 public:
  CSRoomMessage();
  virtual ~CSRoomMessage();

  CSRoomMessage(const CSRoomMessage& from);

  inline CSRoomMessage& operator=(const CSRoomMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSRoomMessage& default_instance();

  void Swap(CSRoomMessage* other);

  // implements Message ----------------------------------------------

  CSRoomMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSRoomMessage& from);
  void MergeFrom(const CSRoomMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 uin = 2;
  inline bool has_uin() const;
  inline void clear_uin();
  static const int kUinFieldNumber = 2;
  inline ::google::protobuf::int32 uin() const;
  inline void set_uin(::google::protobuf::int32 value);

  // optional string username = 3;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 3;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // @@protoc_insertion_point(class_scope:CSRoomMessage)
 private:
  inline void set_has_uin();
  inline void clear_has_uin();
  inline void set_has_username();
  inline void clear_has_username();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* username_;
  ::google::protobuf::int32 uin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Login_2eproto();
  friend void protobuf_AssignDesc_Login_2eproto();
  friend void protobuf_ShutdownFile_Login_2eproto();

  void InitAsDefaultInstance();
  static CSRoomMessage* default_instance_;
};
// -------------------------------------------------------------------

class CSPullRoomsRequest : public ::google::protobuf::Message {
 public:
  CSPullRoomsRequest();
  virtual ~CSPullRoomsRequest();

  CSPullRoomsRequest(const CSPullRoomsRequest& from);

  inline CSPullRoomsRequest& operator=(const CSPullRoomsRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSPullRoomsRequest& default_instance();

  void Swap(CSPullRoomsRequest* other);

  // implements Message ----------------------------------------------

  CSPullRoomsRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSPullRoomsRequest& from);
  void MergeFrom(const CSPullRoomsRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CSPullRoomsRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_Login_2eproto();
  friend void protobuf_AssignDesc_Login_2eproto();
  friend void protobuf_ShutdownFile_Login_2eproto();

  void InitAsDefaultInstance();
  static CSPullRoomsRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSPullRoomsResponse : public ::google::protobuf::Message {
 public:
  CSPullRoomsResponse();
  virtual ~CSPullRoomsResponse();

  CSPullRoomsResponse(const CSPullRoomsResponse& from);

  inline CSPullRoomsResponse& operator=(const CSPullRoomsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSPullRoomsResponse& default_instance();

  void Swap(CSPullRoomsResponse* other);

  // implements Message ----------------------------------------------

  CSPullRoomsResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSPullRoomsResponse& from);
  void MergeFrom(const CSPullRoomsResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // repeated .CSRoomMessage rooms = 2;
  inline int rooms_size() const;
  inline void clear_rooms();
  static const int kRoomsFieldNumber = 2;
  inline const ::CSRoomMessage& rooms(int index) const;
  inline ::CSRoomMessage* mutable_rooms(int index);
  inline ::CSRoomMessage* add_rooms();
  inline const ::google::protobuf::RepeatedPtrField< ::CSRoomMessage >&
      rooms() const;
  inline ::google::protobuf::RepeatedPtrField< ::CSRoomMessage >*
      mutable_rooms();

  // @@protoc_insertion_point(class_scope:CSPullRoomsResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::CSRoomMessage > rooms_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_Login_2eproto();
  friend void protobuf_AssignDesc_Login_2eproto();
  friend void protobuf_ShutdownFile_Login_2eproto();

  void InitAsDefaultInstance();
  static CSPullRoomsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// CSLoginRequest

// optional string username = 1;
inline bool CSLoginRequest::has_username() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSLoginRequest::set_has_username() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSLoginRequest::clear_has_username() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSLoginRequest::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& CSLoginRequest::username() const {
  return *username_;
}
inline void CSLoginRequest::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void CSLoginRequest::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void CSLoginRequest::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSLoginRequest::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* CSLoginRequest::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSLoginRequest::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string password = 2;
inline bool CSLoginRequest::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSLoginRequest::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSLoginRequest::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSLoginRequest::clear_password() {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& CSLoginRequest::password() const {
  return *password_;
}
inline void CSLoginRequest::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void CSLoginRequest::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(value);
}
inline void CSLoginRequest::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSLoginRequest::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    password_ = new ::std::string;
  }
  return password_;
}
inline ::std::string* CSLoginRequest::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSLoginRequest::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CSLoginResponse

// optional int32 uin = 1;
inline bool CSLoginResponse::has_uin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSLoginResponse::set_has_uin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSLoginResponse::clear_has_uin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSLoginResponse::clear_uin() {
  uin_ = 0;
  clear_has_uin();
}
inline ::google::protobuf::int32 CSLoginResponse::uin() const {
  return uin_;
}
inline void CSLoginResponse::set_uin(::google::protobuf::int32 value) {
  set_has_uin();
  uin_ = value;
}

// optional int32 result = 2;
inline bool CSLoginResponse::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSLoginResponse::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSLoginResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSLoginResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 CSLoginResponse::result() const {
  return result_;
}
inline void CSLoginResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// -------------------------------------------------------------------

// CSRoomMessage

// optional int32 uin = 2;
inline bool CSRoomMessage::has_uin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSRoomMessage::set_has_uin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSRoomMessage::clear_has_uin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSRoomMessage::clear_uin() {
  uin_ = 0;
  clear_has_uin();
}
inline ::google::protobuf::int32 CSRoomMessage::uin() const {
  return uin_;
}
inline void CSRoomMessage::set_uin(::google::protobuf::int32 value) {
  set_has_uin();
  uin_ = value;
}

// optional string username = 3;
inline bool CSRoomMessage::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSRoomMessage::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSRoomMessage::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSRoomMessage::clear_username() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& CSRoomMessage::username() const {
  return *username_;
}
inline void CSRoomMessage::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void CSRoomMessage::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(value);
}
inline void CSRoomMessage::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSRoomMessage::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    username_ = new ::std::string;
  }
  return username_;
}
inline ::std::string* CSRoomMessage::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSRoomMessage::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CSPullRoomsRequest

// -------------------------------------------------------------------

// CSPullRoomsResponse

// optional int32 result = 1;
inline bool CSPullRoomsResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSPullRoomsResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSPullRoomsResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSPullRoomsResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 CSPullRoomsResponse::result() const {
  return result_;
}
inline void CSPullRoomsResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// repeated .CSRoomMessage rooms = 2;
inline int CSPullRoomsResponse::rooms_size() const {
  return rooms_.size();
}
inline void CSPullRoomsResponse::clear_rooms() {
  rooms_.Clear();
}
inline const ::CSRoomMessage& CSPullRoomsResponse::rooms(int index) const {
  return rooms_.Get(index);
}
inline ::CSRoomMessage* CSPullRoomsResponse::mutable_rooms(int index) {
  return rooms_.Mutable(index);
}
inline ::CSRoomMessage* CSPullRoomsResponse::add_rooms() {
  return rooms_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CSRoomMessage >&
CSPullRoomsResponse::rooms() const {
  return rooms_;
}
inline ::google::protobuf::RepeatedPtrField< ::CSRoomMessage >*
CSPullRoomsResponse::mutable_rooms() {
  return &rooms_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Login_2eproto__INCLUDED
