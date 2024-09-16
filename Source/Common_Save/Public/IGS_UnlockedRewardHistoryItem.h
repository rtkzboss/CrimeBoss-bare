#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockedRewardHistoryItem.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_UnlockedRewardHistoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Level;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag SelectedRewardItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> OtherRewardsForLevel;

    FIGS_UnlockedRewardHistoryItem();
};
