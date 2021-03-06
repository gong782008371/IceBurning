/**
 * Created by JiaChen on 2016/4/19.
 */

var PylonConfig = PylonConfig || {};


//属性
PylonConfig.attribute = {
    "id" : 103, //id
    "name" : "特斯拉电塔",
    "sightRadius" : 4, //视野半径
    "defense" : 20.0,

    "walkSpeed" : 0, //移动速度
    "HP" : 400.0, //血量
    "attack" : 60.0, //攻击力
    "attackRadius" : 3, //攻击半径
    "attackSpeed" : 0.25,
    "coincost" :90,
    "attackType" : 0,

    "descript" : "防御性建筑物，对于任何靠近他的敌人，给与巨大的杀伤",
    "Icon" :res.GM_PylonIcon_png,
    "defaultImage" : res.GM_PylonDefault_png
};
//攻击
PylonConfig.attack =  {
    "allTime" : 4,
    "attackTime" : 3,
    "begin" : {
        "time" : 3,
        "account" : 27,
        "prefix" : "PylonAttackBegin",
        "animatePlist" : res.GM_Pylon_plist
    },
    "end" : {
        "time" : 1,
        "account" : 6,
        "prefix" : "PylonAttackEnd",
        "animatePlist" : res.GM_Pylon_plist
    }
};

//死亡
PylonConfig.death = {
    "begin" : {
        "time" : 0.7,
        "account" : 7,
        "prefix" : "xxmftdeath",
        "animatePlist" : res.GM_XxmftDeath_Plist
    },
    "end" : null
};

//行走
PylonConfig.walking = null;

PylonConfig.skill = {
    "attribute" : {
        "offsetPoint" : cc.p(0,30),
        "isRangeAttack" : false,
        "isArcAnimate" : MonsterAnimateKind.StraightAnimate,
        "attack" : 20, //有技能伤害 则伤害根据技能伤害算
        "time" : 0.2,
        "attackRadius" :1,
        "defaultImage" : res.GM_PylonSkillDefault_png
    },
    "Animate" : null
}