#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockedRewardHistoryItem.h"
#include "IGS_ProgressionSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_ProgressionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ProgressLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ProgressToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 PendingUnlockedLevelUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> PendingUnlockedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_UnlockedRewardHistoryItem> UnlockedRewardsHistory;
    
    FIGS_ProgressionSaveData();
};

