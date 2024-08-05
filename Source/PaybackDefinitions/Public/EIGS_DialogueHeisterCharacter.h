#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueHeisterCharacter.generated.h"

UENUM(BlueprintType)
enum class EIGS_DialogueHeisterCharacter : uint8 {
    None,
    GenericPlanner,
    TheHandPlanner,
    TheCaptainPlanner,
    TheAgentPlanner,
    CaseyPlanner,
    DollarDragonPlanner,
    ServoPlanner,
    CagnaliPlanner,
    GenericHeister = 30,
    Hitman1 = 40,
    Informer1 = 50,
    Thief2 = 61,
    Thief1 = 60,
    GenericNeutralM1 = 70,
    GenericNeutralM2,
    GenericNeutralF1,
    GenericLatinxM1 = 80,
    GenericLatinxM2,
    GenericLatinxF1,
    GenericBlackM1 = 90,
    GenericBlackM2,
    GenericBlackF1,
    Cracker = 160,
    Chase,
    Ropes,
    Mozart,
    Tuna,
    Forehand,
    Smoke,
    Lector,
    MrX,
    Wiz,
    Tulip,
    Ranger,
    Stinger,
    Runaway,
    Jupiter,
    Vamp,
    Peak,
    Silver,
    Clutch,
    Volk,
    MotherTheresa,
    TheHand,
    TheCaptain,
    TheAgent,
    Spy,
    Repairman,
    Janitor,
    RobotHeister,
    GenericBoss = 230,
    Cagnali,
    DollarDragon,
    TravisBaker,
    KarlKhan,
    Ice,
    GenericDriver = 245,
    DriverSmoke,
    DriverClutch,
    NoVoiceFemale = 254,
    NoVoice,
    Character2DMin = GenericPlanner,
    Character2DMax = ServoPlanner,
    Character3DMin = GenericHeister,
    Character3DMax = Ice,
    PlannerMin = GenericPlanner,
    PlannerMax = CagnaliPlanner,
    HeisterMin = GenericHeister,
    HeisterMax = Ice,
    BossMin = GenericBoss,
    BossMax = Ice,
    DriverMin = GenericDriver,
    DriverMax = DriverClutch,
    NoVoiceMin = NoVoiceFemale,
    NoVoiceMax = NoVoice,
};

