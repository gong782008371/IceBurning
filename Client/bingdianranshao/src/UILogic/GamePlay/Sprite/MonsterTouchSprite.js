/**
 * Created by jiachen on 2016/4/4.
 */

var MonsterTouchSprite = cc.Sprite.extend({
    m_id : null,
    m_config : null,
    ctor : function(config){
        this._super(config.attribute.Icon);
        this.m_config = config;
        this.m_id = config.attribute.id;
        cc.eventManager.addListener({
            event: cc.EventListener.TOUCH_ONE_BY_ONE,
            swallowTouches: true,
            onTouchBegan: this.onTouchBegan,
            onTouchMoved: this.onTouchMoved,
            onTouchEnded: this.onTouchEnded,
            onTouchCancelled : this.onTouchCancelled
        }, this);
    },
    onTouchBegan : function (touch, event) {
        var target = event.getCurrentTarget();
        if (!target.isTouchInRect(touch)){
            return false;
        }
        MonsterTouch.addListerSprite(target.m_config,touch.getLocation());
        if(target.m_id < 100){
            monsterManager.addClipperNode();
        }
        else{
            monsterManager.addBuildingTick();
        }
        return true;
    },
    onTouchMoved : function (touch, event) {
        MonsterTouch.moveListerSprite(touch.getLocation());

    },
    onTouchEnded : function (touch, event) {
        var target = event.getCurrentTarget();
        MonsterTouch.removeListerSprite();
        var point = touch.getLocation();
        if(target.m_id < 100){
            monsterManager.removeClipperNode();
        }
        else {
            monsterManager.removeBuildingTick();
        }
        var step = new GameJoy.JS_PBFrameMessage();
        step.set_uin(GC.UIN);
        step.set_obj_id(this.m_id);
        step.set_pos_x(point.x);
        step.set_pos_y(point.y);
        setp.set_type(UserOperatorType.Monster);
        GameJoy.JS_CSFrameSyncRequest.set_step(step);
        GameJoy.Proxy.SendRequest();
        cc.log("send Monster Message");
        //monsterManager.addMonsterSprite(target.m_config, point,true);

    },
    onTouchCancelled : function (touch, event) {
    },

    isTouchInRect:function (touch) {
        var getPoint = touch.getLocation();
        point = this.convertToWorldSpace(cc.p(this.width/2,this.height/2));
        myRect = cc.rect(point.x - this.width/2.0,point.y - this.height/2.0,this.width,this.height);
        return cc.rectContainsPoint(myRect, getPoint);
    }

});
