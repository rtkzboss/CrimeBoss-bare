#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "Engine/DataAsset.h"
#include "IGS_PickupActorBase.h"
#include "IGS_PickupActorInventoryItem.h"
#include "IGS_PickupClassesCustomThrowingData.h"
#include "IGS_WeaponPickupActor.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupClassesData.generated.h"

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
