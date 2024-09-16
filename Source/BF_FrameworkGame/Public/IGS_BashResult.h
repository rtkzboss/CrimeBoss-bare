#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "Engine/EngineTypes.h"
#include "IGS_ImpactTypeObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_BashResult.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT()
struct FIGS_BashResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_GameCharacterFramework* BashingCharacter;

    UPROPERTY()
    FHitResult HitResult;

    UPROPERTY()
    float Damage;

    UPROPERTY()
    TSubclassOf<UDamageType> DamageType;

    UPROPERTY()
    TSubclassOf<UIGS_ImpactTypeObject> ImpactType;

    UPROPERTY()
    uint8 bHit: 1;

    UPROPERTY()
    uint8 bIsAI: 1;

    UPROPERTY()
    uint8 bIsUnarmedMelee: 1;

    BF_FRAMEWORKGAME_API FIGS_BashResult();
};
