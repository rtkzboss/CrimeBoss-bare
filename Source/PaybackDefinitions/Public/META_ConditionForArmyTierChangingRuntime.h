#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_Gang.h"
#include "EMETA_UnaryOperation.h"
#include "META_ConditionForArmyTierChangingRuntime.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ConditionForArmyTierChangingRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ArmyTier CurrentArmyTier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurrentTurfsAmountUnderControl;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_UnaryOperation WhatHappenedWithTurfAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_UnaryOperation ArmyTierAction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Gang OwnerGang;

    FMETA_ConditionForArmyTierChangingRuntime();
};
