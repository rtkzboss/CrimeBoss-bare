#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableLiveObjectsHolder.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT()
struct FIGS_ThrowableLiveObjectsHolder {
    GENERATED_BODY()
public:
    UPROPERTY()
    UIGS_ThrowableInventoryObject* InventoryObject;
    
    UPROPERTY()
    UClass* Projectile;
    
    BF_AI_API FIGS_ThrowableLiveObjectsHolder();
};

