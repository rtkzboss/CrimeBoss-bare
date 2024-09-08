#pragma once
#include "CoreMinimal.h"
#include "IGS_CareerSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_CareerSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CareerSlotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsDebugSaveFile;
    
    COMMON_SAVE_API FIGS_CareerSlotInfo();
};

