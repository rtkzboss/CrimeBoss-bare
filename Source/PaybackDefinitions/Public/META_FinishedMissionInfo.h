#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_CharacterState.h"
#include "EMETA_JobResult.h"
#include "EMETA_ObjectiveState.h"
#include "Templates/SubclassOf.h"
#include "META_FinishedMissionInfo.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FinishedMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionOutcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BonusCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> BonusLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStealthCompletionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> MissionOutParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_CharacterID, EMETA_CharacterState> AssignedCrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CivilianCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PoliceCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ObjectiveState BonusObjectiveResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_JobResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_JobResult AmbushResult;
    
    FMETA_FinishedMissionInfo();
};

