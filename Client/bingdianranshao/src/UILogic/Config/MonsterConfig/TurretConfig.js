/**
 * Created by JiaChen on 2016/4/17.
 */

var TurretConfig = TurretConfig || {};

//属性
TurretConfig.attribute = {
    "id" : 102, //id
    "name" : "炮塔",
    "Icon" :res.GM_TurretIcon_png,
    "defaultImage" : res.GM_TurretAttackDeafult_png,
    "sightRadius" : 4, //视野半径
    "defense" : 20.0,

    "HP" : 300.0, //血量
    "attack" : 30.0, //攻击力
    "walkSpeed" : 0, //移动速度
    "attackRadius" : 2, //攻击半径
    "attackSpeed" : 0.5 / GC.AttackSpeedCoefficient,
    "coincost" :100,
    "attackType" : 1,

    "descript" : "是一固定于地面建筑上的弹丸射击武器装置,给靠近的人力范围性伤害"

};

TurretConfig.attack =  {
    "allTime" : GC.AttackSpeedCoefficient / 0.5,
    "attackTime" : GC.AttackSpeedCoefficient / 0.5 - 0.3,
    "begin" : {
        "time" : GC.AttackSpeedCoefficient / 0.5 - 0.5,
        "account" : 10,
        "prefix" : "TurretAttackBegin",
        "animatePlist" : res.GM_TurreAttackBegin_plist
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
TurretConfig.death = {
    "begin" : {
        "time" : 2,
        "account" : 7,
        "prefix" : "xxmftdeath",
        "animatePlist" : res.GM_XxmftDeath_Plist
    },
    "end" : null
};

//行走
TurretConfig.walking = null;

//技能
TurretConfig.skill = {
    "attribute" : {
        "offsetPoint" : cc.p(0,30),
        "isRangeAttack" : true, //是否是范围伤害
        "isArcAnimate" : MonsterAnimateKind.ArcAnimate,
        "attack" : 20,
        "walkingSpeed" : 0,
        "attackRadius" : 4,
        "defaultImage" : res.GM_TurretRangedAttackDefault_png
    },
    "Animate" :{
        "begin" :{
            "time" : 0.5,
            "account" : 6,
            "prefix" : "RangedAttackBegin",
            "animatePlist" : res.GM_TurretRangedAttackBegin_plist
        },
        "end" :null,
        "effect" : {
            "time" : 1,
            "account" : 18,
            "prefix" : "RangedAttackEffects",
            "animatePlist" : res.GM_TurretRangedEffect_plist
        }
    }
 };