#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_ChainLoadoutID.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainLoadout.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainLoadout : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainLoadoutID> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> PrimaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> SecondaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> MeleeWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;

    FIGS_ChainLoadout();
};
