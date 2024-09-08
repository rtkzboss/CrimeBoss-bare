#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_ItemType.h"
#include "IGS_CommonItemData.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_InventoryObjectFramework.generated.h"

class UIGS_InventoryObjectFramework;

UCLASS(Abstract, BlueprintType)
class COMMON_DATA_API UIGS_InventoryObjectFramework : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ItemType ItemType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUseCustomName;
    
    UIGS_InventoryObjectFramework();

    UFUNCTION(BlueprintCallable)
    void TransferData(UIGS_InventoryObjectFramework* inOtherItem);
    
    UFUNCTION(BlueprintCallable)
    void LoadInventoryObjectData(FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintPure)
    bool IsWieldable();
    
    UFUNCTION(BlueprintPure)
    bool IsWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsThrowable();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerForbidden();
    
    UFUNCTION(BlueprintPure)
    bool IsMetal();
    
    UFUNCTION(BlueprintPure)
    bool IsLootBag();
    
    UFUNCTION(BlueprintPure)
    bool IsDroppable();
    
    UFUNCTION(BlueprintPure)
    bool IsCarryable();
    
    UFUNCTION(BlueprintCallable)
    void InitDefaultInventoryObjectData();
    
    UFUNCTION(BlueprintPure)
    bool GetWasPickedUpBefore();
    
    UFUNCTION(BlueprintPure)
    FText GetItemName();
    
    UFUNCTION(BlueprintPure)
    bool GetIsBonusLoot();
    
    UFUNCTION(BlueprintPure)
    FIGS_InventoryObjectUniversalData GetInventoryObjectData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIndex();
    
private:
    UFUNCTION(BlueprintPure)
    FText GetDefaultName();
    
    UFUNCTION(BlueprintPure)
    FText GetCustomName();
    
public:
    UFUNCTION(BlueprintCallable)
    FIGS_CommonItemData GetCommonDataBP();
    
};

