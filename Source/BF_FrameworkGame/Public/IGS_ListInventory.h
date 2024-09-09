#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryInterface.h"
#include "Components/ActorComponent.h"
#include "IGS_ListInventoryModifiedSignatureDelegate.h"
#include "IGS_ListItemHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_ListInventory.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ListInventory : public UActorComponent, public IIGS_InventoryInterface {
    GENERATED_BODY()
public:
    UIGS_ListInventory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetPocketLootWeight();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAndClearPocketLoot();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAndClearBonusPocketLoot();
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bIsReady;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxBagCount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FIGS_ListItemHolder> Items;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ListInventoryModifiedSignature OnInventoryModified;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PocketLoot;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusPocketLoot;
    

    // Fix for true pure virtual functions not being implemented
};

