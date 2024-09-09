#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PickupsManager.generated.h"

class AIGS_AmmoBoxBase;
class AIGS_CarryableItemPickup;
class AIGS_LootBagPickup;
class AIGS_PickupActorBase;
class AIGS_PickupActorInventoryItem;
class AIGS_StaticMeshInventoryItemPickup;
class AIGS_WeaponPickupActor;
class UIGS_PickupsManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PickupsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PickupsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PickupsManager* GetPickupsManager(UObject* inWCO);
    
protected:
    UPROPERTY()
    TArray<AIGS_PickupActorBase*> m_AllPickups;
    
    UPROPERTY()
    TArray<AIGS_AmmoBoxBase*> m_AmmoBoxPickups;
    
    UPROPERTY()
    TArray<AIGS_LootBagPickup*> m_LootBagPickups;
    
    UPROPERTY()
    TArray<AIGS_PickupActorInventoryItem*> m_InventoryItemPickups;
    
    UPROPERTY()
    TArray<AIGS_WeaponPickupActor*> m_WeaponPickups;
    
    UPROPERTY()
    TArray<AIGS_CarryableItemPickup*> m_CarryableItemPickups;
    
    UPROPERTY()
    TArray<AIGS_CarryableItemPickup*> m_CarryableLootItemPickups;
    
    UPROPERTY()
    TArray<AIGS_StaticMeshInventoryItemPickup*> m_StaticMeshInventoryItemPickups;
    
};

