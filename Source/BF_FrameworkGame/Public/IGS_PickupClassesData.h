#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_PickupClassesCustomThrowingData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupClassesData.generated.h"

class AIGS_PickupActorBase;
class AIGS_PickupActorInventoryItem;
class AIGS_WeaponPickupActor;
class UIGS_InventoryObjectFramework;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_PickupClassesData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_PickupClassesData();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorInventoryItem> DefaultPickupClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_WeaponPickupActor> WeaponPickupClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorBase> EquipmentPickupClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorBase> LootBagPickupClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorBase> GenericItemBagPickupClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_PickupClassesCustomThrowingData DefaultThrowingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_PickupClassesCustomThrowingData WeaponThrowingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_PickupClassesCustomThrowingData BagThrowingData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereTestRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<UIGS_InventoryObjectFramework>, FIGS_PickupClassesCustomThrowingData> CustomThrowingData;
    
};

