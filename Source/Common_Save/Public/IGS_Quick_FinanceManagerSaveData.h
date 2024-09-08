#pragma once
#include "CoreMinimal.h"
#include "IGS_Quick_FinanceManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_FinanceManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Balance;
    
    FIGS_Quick_FinanceManagerSaveData();
};

