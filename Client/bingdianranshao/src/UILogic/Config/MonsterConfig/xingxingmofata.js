/**
 * Created by jiachen on 2016/4/8.
 */

var XingxingmofataConfig = XingxingmofataConfig || {};


//属性
XingxingmofataConfig.attribute = {
    "id" : 101, //id
    "name" : "天雷塔",
    "sightRadius" : 4  / GC.AttackSpeedCoefficient, //视野半径
    "defense" : 20.0,

    "HP" : 250.0, //血量
    "attack" : 40.0, //攻击力
    "walkSpeed" : 0, //移动速度
    "attackRadius" : 3, //攻击半径
    "attackSpeed" : 0.5 / GC.AttackSpeedCoefficient,
    "attackType" : 1,
    "coincost" :140,

    "descript" : "防御性建筑物，召唤从天而降的天雷，对于范围性敌人毁灭性打击",
    "Icon" : res.GM_XxmftIcon_Png,
    "defaultImage" : res.GM_Xxmft_Png
};
//攻击
XingxingmofataConfig.attack =  {
    "allTime" : GC.AttackSpeedCoefficient /0.5,
    "attackTime" : GC.AttackSpeedCoefficient /0.5 - 0.5,
    "begin" : {
        "time" : GC.AttackSpeedCoefficient /0.5 - 0.5,
        "account" : 10,
        "prefix" : "xxfmtAttack",
        "animatePlist" : res.GM_XxmftAttack_Plist
    },
    "end" : null
    /*"end" : {
        "time" : 1,
        "account" : 9,
        "prefix" : "xxmftattackdeath",
        "animatePlist" : res.GM_XxmftAttackDeath_Plist
    }*/
};

//死亡
XingxingmofataConfig.death = {
    "begin" : {
        "time" : 2,
        "account" : 7,
        "prefix" : "xxmftdeath",
        "animatePlist" : res.GM_XxmftDeath_Plist
    },
    "end" : null
};

//行走
XingxingmofataConfig.walking = null;

//技能
XingxingmofataConfig.skill = {
    "attribute" : {
        "offsetPoint" : cc.p(0,0),
        "isRangeAttack" : true,
        "isArcAnimate" : MonsterAnimateKind.pointAnimate,
        "attack" : 20,
        "walkingSpeed" : 0,
        "attackRadius" : 4,
        "defaultImage" : res.GM_XxmftSkill_Png
    },
    "Animate" :{
        "begin" :{
            "time" : 0.5,
            "account" : 6,
            "prefix" : "attack",
            "animatePlist" : res.GM_XxmftSkillAttack_Plist
        },
        "end" : null
    }
};
/*XingxingmofataConfig.skill = {
    "attribute" : {
        "offsetPoint" : cc.p(0,0),
        "isRangeAttack" : false,
        "isArcAnimate" : false,
        "attack" : 20, //有技能伤害 则伤害根据技能伤害算
        "time" : 0.2,
        "attackRadius" :1,
        "defaultImage" : res.GM_XxmftSkillArrow_png
    },
    "Animate" : null
}*/
