#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemPropertyFlags.h"
#include "Components/ActorComponent.h"
#include "IGS_GlobalInventoryModifiedDynamicSignatureDelegate.h"
#include "IGS_GlobalItemChangedDynamicSignatureDelegate.h"
#include "IGS_GlobalItemSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalInventory.generated.h"

class UIGS_GlobalInventoryObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_GlobalInventory : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_GlobalInventoryModifiedDynamicSignature OnInventoryModified;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GlobalItemChangedDynamicSignature OnItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GlobalItemChangedDynamicSignature OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GlobalItemChangedDynamicSignature OnWTAdded;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_Slots)
    TArray<FIGS_GlobalItemSlot> mR_Slots;
    
    UPROPERTY(ReplicatedUsing=OnRep_WTSlot)
    FIGS_GlobalItemSlot mR_WTSlot;
    
public:
    UIGS_GlobalInventory(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool RemoveItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, bool inRemoveAll);
    
protected:
    UFUNCTION()
    void OnRep_WTSlot(FIGS_GlobalItemSlot inWTSlot);
    
    UFUNCTION()
    void OnRep_Slots(const TArray<FIGS_GlobalItemSlot>& inOldSlots);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsItemAllowedInInventory(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemWithProperty(EIGS_ItemPropertyFlags inProperty);
    
    UFUNCTION(BlueprintPure)
    int32 GetWTCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FIGS_GlobalItemSlot> GetAllSlotsBP() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddWT(const TSubclassOf<UIGS_GlobalInventoryObject>& inWTClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    int32 AddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd);
    
};

