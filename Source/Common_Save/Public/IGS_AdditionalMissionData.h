#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AdditionalMissionData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_AdditionalMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGameplayTag Tag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Value;

    FIGS_AdditionalMissionData();
};
