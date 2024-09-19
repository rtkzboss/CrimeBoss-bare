#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIMontageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIMontageType : uint8 {
    AIM_Unknown = 255 UMETA(DisplayName=Unknown),
    AIM_Breach = 0 UMETA(DisplayName=Breach),
    AIM_SpecialObjective UMETA(DisplayName="Special Objective"),
    AIM_HitReactionMedium UMETA(DisplayName="Hit Reaction Medium"),
    AIM_HitReactionHeavy UMETA(DisplayName="Hit Reaction Heavy"),
    AIM_SpawnAnimation UMETA(DisplayName="Spawn Animation"),
    AIM_CoverPeek UMETA(DisplayName="Cover Peek"),
    AIM_Dodge UMETA(DisplayName=Dodge),
    AIM_UNUSED UMETA(DisplayName=UNUSED),
    AIM_Roll UMETA(DisplayName=Roll),
    AIM_SmartLink UMETA(DisplayName="Smart Link"),
    AIM_Leaning UMETA(DisplayName=Leaning),
    AIM_Reaction UMETA(DisplayName=Reaction),
    AIM_SituationalDeath UMETA(DisplayName="Situational Death"),
    AIM_MeleePush UMETA(DisplayName="Melee Push"),
    AIM_Car UMETA(DisplayName=Car),
    AIM_MAX_INDEX UMETA(DisplayName="MAX INDEX"),
};
