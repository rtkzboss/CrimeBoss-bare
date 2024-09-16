#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_GangStrategy.h"
#include "META_ConditionForArmyTierChangingRuntime.h"
#include "META_EffectOnAIBossStrength.h"
#include "META_GangInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseStrength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StrengthChangeFromTerritory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> TopEnemies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> Friends;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> Enemies;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> LostTerritory;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_EffectOnAIBossStrength> EffectsOnAIBossStrength;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> GangModifiers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_GangStrategy Strategy;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ArmyTier ArmyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_ConditionForArmyTierChangingRuntime> ConditionsForAiArmyTierChange;

    FMETA_GangInfo();
};
