#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_PreviousSessionSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_PreviousSessionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FGuid MissionID;
    
    FIGS_PreviousSessionSaveData();
};

