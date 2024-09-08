#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_CommonItemData.h"
#include "IGS_LootBagSingleItem.h"
#include "IGS_LootBagDestroyedDelegate.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootBagPickup.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_InventoryObjectFramework;
class UIGS_LootBagInteractiveComponent;
class USkeletalMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_LootBagPickup : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_LootBagDestroyed OnLootBagDestroyed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasItemName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText PrefixText;
    
    UPROPERTY(EditInstanceOnly)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PlacedInLevelItems;
    
    UPROPERTY(EditInstanceOnly)
    EIGS_ItemType PlacedInLevelItemType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* LootGrabAkEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_CommonItemData CommonData;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_LootBagInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    AIGS_LootBagPickup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnContainingItemsChangedEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPickup(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCatchInAir(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_LootBagGrabbed();
    
public:
    UFUNCTION(BlueprintPure)
    EIGS_ItemType GetItemType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootBagSingleItem> GetItems();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableLootBagPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableLootBagPhysics();
    
};

