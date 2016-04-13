/**
 * Created by jiachen on 2016/3/29.
 */

/*var step = new GameJoy.JS_PBFrameMessage();
step.set_uin()
GameJoy.JS_CSFrameSyncRequest.set_step(step);
GameJoy.Proxy.SendRequest()

var id = GameJoy.Proxy.RecvResponse()
GameJoy.JS_CSFrameSyncResponse.Instance().get_steps();
var gamePlayLayer;*/

var RecvMessagTime = 1.0/60;

var GamePlayLayer = cc.Layer.extend({

    scrollView : null,
    backgroundLayer : null,
    monstarLayer : null,
    monsterTouchlayer: null,

    playerInfomation : null,
    selectTool : null,
    timeTitle : null,
    GC_Time : 0,

    ctor:function () {
        this._super();
        this.addBackgroundpScrollView();
        this.addMonsterLayerLayer();
        this.addMonsterTouchlayer();
        this.playerInfomation = ccs.load(res.GM_PlayerInfomation_json).node;
        this.TimeTitle = ccui.helper.seekWidgetByName(this.playerInfomation,"m_time_label");

        this.addChild(this.playerInfomation,150);
        this.schedule(this.updataTime,1);//计时器
        this.schedule(this.recvMessage,RecvMessagTime);
        gamePlayLayer = this;
    },
    addBackgroundpScrollView :function(){

        this.scrollView = new ccui.ScrollView();
        this.scrollView.setDirection(ccui.ScrollView.DIR_HORIZONTAL);
        this.scrollView.setTouchEnabled(true);
        this.scrollView.setContentSize(cc.size(GC.w, GC.h));
        this.scrollView.setInnerContainerSize(cc.size(GC.w*2, GC.h));//可滑动区域
        this.addChild(this.scrollView);
        if(GC.IS_HOST == false){
            this.runAction(cc.sequence(cc.delayTime(0.05), cc.callFunc(function(){this.scrollView.jumpToRight()}.bind(this))));
        }
        this.backgroundLayer = new MonsterBackgroundLayer();
        this.scrollView.addChild(this.backgroundLayer,LAYER_PRIORITY_MAP);
    },
    addMonsterLayerLayer : function () {
        this.monstarLayer = new MonsterLayer();
        this.monstarLayer.addMainCitySprite();
        this.scrollView.addChild(this.monstarLayer,LAYER_PRIORITY_MONSTER);

    },

    //计算时间

    recvMessage : function(){
        //cc.log("-------------------------------------------------1");
        var id = GameJoy.Proxy.RecvResponse();
        if(id > 0){
            cc.log("recvMessageing...."+id);
        }
        if(id == NetIdentify["MSG_FRAME_SYNC"]){
            cc.log("step 1 recvMessage id "+id);
            var response = GameJoy.JS_CSFrameSyncResponse.Instance();
            cc.log("resule is "+ response.get_result());
            if(response.get_result() != 0){
                return;
            }
            var steps =response.get_steps();
            cc.log("length is " + steps.length);
            for(var i =0;i < steps.length;i++){
                var step = steps[i];
                var uin = step.get_uin();
                var x = step.get_pos_x();
                var y = step.get_pos_y();
                var monsterId = step.get_obj_id();
                var type = step.get_type();

                var position = cc.p(x,y);
                var config = MonsterConfig[""+monsterId];
                if(config == null)
                var isMyMonster  =false;
                if(uin == GC.UIN){
                    isMyMonster = true;
                }
                else{
                    isMyMonster = false;
                }
                cc.log("uin is "+ step.get_uin());
                cc.log("x is "+step.get_pos_x());
                cc.log("y is " + step.get_pos_y());
                cc.log("mongter id "+ monsterId);
                //cc.log("name is ",config.name);
                cc.log("type is "+ step.get_type());
                monsterManager.addMonsterSprite(monsterId, position,isMyMonster);
            }
        }
    },
    updataTime : function(){
        var secondTitle;
        var minutesTitle;
        this.GC_Time++;
        var seconds = this.GC_Time%60;
        var minutes = (this.GC_Time / 60)%60;
        minutes = parseInt(minutes);
        if(seconds < 10){
            secondTitle = "0" + seconds;
        }
        else {
            secondTitle = "" + seconds;
        }
        if(minutes < 10){
            minutesTitle = "0"+minutes+":";
        }
        else {
            minutesTitle = ""+minutes+";";
        }
        var timeTitle = "00:"+minutesTitle+secondTitle;
        this.TimeTitle.setString(timeTitle);

    },

    addMonsterTouchlayer :function(){
        this.monsterTouchlayer = new MonsterTouchLayer();
        this.addChild(this.monsterTouchlayer,LAYER_PRIORITY_TOUCH);
    },

    addSelectTool : function(){
        this.selectTool = ccs.load(res.GM_SelectTool_json).node;
        //this.selectTool.setPosition(cc.p(0,GC.w - 90));
        this.addChild(this.selectTool,150);
    }


});
var GamePlayScene = cc.Scene.extend({
    gamePlayLayer :null,
    monsterManager:null,
    checkPathManger:null,
    onEnter :function(){
        this._super();
        this.monsterManager = new MonsterManager();
        this.checkPathManger = new CheckPathManager();
        this.addGamePlay();
    },
    addGamePlay : function(){
        this.gamePlayLayer = new GamePlayLayer();
        this.addChild(this.gamePlayLayer);
    }
});
