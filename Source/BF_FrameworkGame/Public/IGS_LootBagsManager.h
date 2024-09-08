#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LootBagsManager.generated.h"

class AIGS_LootBagPickup;
class UIGS_LootBagsManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootBagsManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AIGS_LootBagPickup*> m_LootBags;
    
    UPROPERTY()
    TArray<AIGS_LootBagPickup*> m_GadgetBags;
    
public:
    UIGS_LootBagsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_LootBagsManager* GetLootBagsManager(UObject* inWCO);
    
};

