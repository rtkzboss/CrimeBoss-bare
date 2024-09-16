#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AchievementSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_AchievementSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag ID;

    UPROPERTY()
    int32 CurrentValue;

    UPROPERTY()
    int32 UploadedValue;

    FIGS_AchievementSaveData();
};
