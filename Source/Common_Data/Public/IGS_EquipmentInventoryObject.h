#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_OnChargeCountChangedEventDelegate.h"
#include "IGS_OnKillCountChangedNativeDelegate.h"
#include "IGS_EquipmentInventoryObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_EquipmentInventoryObject : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnChargeCountChangedEvent OnChargeCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnKillCountChangedNative OnKillCountChangedNative;
    
    UIGS_EquipmentInventoryObject();

    UFUNCTION(BlueprintPure)
    float GetLastChargeTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLastChargeKillCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHasInfiniteCharges() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChargeCount() const;
    
};

