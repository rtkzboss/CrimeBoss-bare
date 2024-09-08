#pragma once
#include "CoreMinimal.h"
#include "META_MissionsSave.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quick_ContractManagerSaveData.generated.h"

class UIGS_ContractID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ContractManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSubclassOf<UIGS_ContractID>> AvailableContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MissionsSave ActiveContractMissions;
    
    FIGS_Quick_ContractManagerSaveData();
};

