#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "Engine/EngineTypes.h"
#include "IGS_ImpactTypeObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_GrenadeData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GrenadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool OverlapsOnExplosion;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLineTraceOnOverlap;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LineTraceZOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InnerEffectRadius;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OuterEffectRadius;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EffectFalloff;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartTimerImmediately;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionTimer;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DestroyAfterExplosionTime;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanBeCooked;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanAffectThrower;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanAffectFriendlies;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanAffectRobots;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanAffectHumans;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DealsDamage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDamage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumDamage;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ExplosionLoudness;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> EffectPreventionChannel;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> DamageTypeClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> ShotImpactType;

    FIGS_GrenadeData();
};
