#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainMissionEntry.generated.h"

class UBinkMediaPlayer;
class UIGS_ChainMissionEntryID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainMissionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bShowAdvancedProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText BriefingCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* BriefingMovie;
    
    UPROPERTY(EditDefaultsOnly)
    FString DebugMissionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainMissionEntryID> MissionID;
    
    UPROPERTY()
    int32 EnableForDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DebriefCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* DebriefMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText FailCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* FailMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LobbyMenuVOType;
    
    FIGS_ChainMissionEntry();
};

