#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockRewardRanges.h"
#include "IGS_UnlockManagerData.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_UnlockManagerData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_UnlockManagerData();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ProgressResetCompensationAlwaysGranted;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ProgressResetCompensationAlwaysGrantedAndBought;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ProgressResetCompensationLevelUp;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ProgressResetCompensationLevelUpAndBought;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer DefaultUnlockedItems;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer DefaultUnlockedAndBoughtItemsMP;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_UnlockRewardRanges> RewardRanges;

};
