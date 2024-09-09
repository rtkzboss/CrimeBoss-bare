#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "IGS_CarryableInventoryObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_CarryableInventoryObject : public UIGS_ThrowableInventoryObject {
    GENERATED_BODY()
public:
    UIGS_CarryableInventoryObject();

    UFUNCTION(BlueprintCallable)
    float GetRelativeHealth();
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float BaseHealth;
    
};

