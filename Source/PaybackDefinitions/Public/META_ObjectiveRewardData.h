#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_ObjectiveReward.h"
#include "META_ObjectiveRewardData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ObjectiveRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ObjectiveReward RewardType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootMonetaryValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality WeaponQuality;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* WeaponID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoldiersAmount;

    FMETA_ObjectiveRewardData();
};
