#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainContractID.h"
#include "Templates/SubclassOf.h"
#include "IGS_ActiveChainInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ActiveChainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ActiveMissionIndex;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainContractID> ActiveChainContractID;

    FIGS_ActiveChainInfo();
};
