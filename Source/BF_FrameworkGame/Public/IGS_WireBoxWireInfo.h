#pragma once
#include "CoreMinimal.h"
#include "IGS_WireBoxWireInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_WireBoxWireInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsLightActive;
    
    UPROPERTY()
    bool bIsWireRemoved;
    
    UPROPERTY()
    bool bSuccessRemove;
    
    FIGS_WireBoxWireInfo();
};

