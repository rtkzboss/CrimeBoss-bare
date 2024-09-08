#pragma once
#include "CoreMinimal.h"
#include "IGS_GlobalItemSlot.generated.h"

USTRUCT(BlueprintType)
struct FIGS_GlobalItemSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemClassIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemCount;
    
    BF_FRAMEWORKGAME_API FIGS_GlobalItemSlot();
};

