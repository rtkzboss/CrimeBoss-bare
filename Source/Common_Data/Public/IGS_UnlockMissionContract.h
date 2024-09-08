#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockMissionContract.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_UnlockMissionContract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag MissionID;
    
    FIGS_UnlockMissionContract();
};

