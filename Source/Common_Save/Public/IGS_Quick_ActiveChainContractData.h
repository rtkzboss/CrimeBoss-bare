#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainMissionEntry.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "IGS_MissionResult.h"
#include "META_GenericCharacterSave.h"
#include "META_HeisterSaveData.h"
#include "META_MissionsSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ActiveChainContractData.generated.h"

class UIGS_ChainContractID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ActiveChainContractData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSubclassOf<UIGS_ChainContractID> ActiveChainContract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_ChainMissionEntry> ActiveChainMissionSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MissionsSave ActiveChainMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ActiveMissionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FIGS_MissionResult> CurrentChainResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_GenericCharacterSave> GenericCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_HeisterSaveData> UniqueCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EIGS_ChainDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ChainMoney;
    
    FIGS_Quick_ActiveChainContractData();
};

