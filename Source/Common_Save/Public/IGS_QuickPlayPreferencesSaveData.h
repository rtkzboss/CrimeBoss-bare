#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "IGS_QuickPlayPreferencesSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_QuickPlayPreferencesSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FCommonHeisterData PlayerHeisterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bKeepCustomizedLoadout;
    
    FIGS_QuickPlayPreferencesSaveData();
};

