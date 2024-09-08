#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_HUDPlayerWieldableData.generated.h"

class AIGS_WieldableBase;

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_HUDPlayerWieldableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AIGS_WieldableBase> WieldableID;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_WieldableBase> WieldableInstance;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_WieldableSlot Slot;
    
    FIGS_HUDPlayerWieldableData();
};

