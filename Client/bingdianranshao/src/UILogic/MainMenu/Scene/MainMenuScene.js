/**
 * Created by jiachen on 2016/3/28.
 */

var MainMenuScene = cc.Scene.extend({

    //    属性声明
    _backgroundLayer : null,
    _touchLayer      : null,

    onEnter:function () {
        this._super();
        this.addBackgroundLayer();

       // this.addTouchLayer();
    },

    addBackgroundLayer : function(){

//        创建一个背景层，并且添加到当前层中
        this._backgroundLayer = new MMBackgroundLayer();
        this.addChild(this._backgroundLayer,LAYER_PRIORITY_BACKGROUND);
    },
    addTouchLayer : function(){
        this._touchLayer = new MMTouchLayer();
        this.addChild(this._touchLayer,LAYER_PRIORITY_TOUCH);

    }
});