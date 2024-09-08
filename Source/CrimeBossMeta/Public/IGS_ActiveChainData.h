#pragma once
#include "CoreMinimal.h"
#include "IGS_ActiveChainInfo.h"
#include "IGS_ChainMissionEntry.h"
#include "META_CharacterInfo.h"
#include "IGS_Quick_ChainResult.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ChainType.h"
#include "IGS_ActiveChainData.generated.h"

class UMETA_BaseFPSMission;
class UMETA_Character;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_ActiveChainData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ChainType ChainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ChainDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_ActiveChainInfo ActiveChainInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ChainMissionEntry> ActiveChainMissionSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_BaseFPSMission*> ActiveChainMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_BaseFPSMission* CurrentMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_Quick_ChainResult ActiveChainResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Character*> ChainCrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_CharacterInfo> ChainCrewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, int32> MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChainMoney;
    
    FIGS_ActiveChainData();
};

