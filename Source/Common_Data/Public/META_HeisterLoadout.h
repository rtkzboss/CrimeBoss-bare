#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_HeisterLoadout.generated.h"

class UMETA_Equipment;
class UMETA_Weapon;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_Weapon* PrimaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeaponClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Weapon*> PrimaryPersonalWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag PrimaryWeaponSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> PrimaryPersonalWeaponsClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_Weapon* SecondaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeaponClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Weapon*> SecondaryPersonalWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SecondaryWeaponSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> SecondaryPersonalWeaponsClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_Equipment* SelectedEquipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> ChainEquipments;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Equipment*> ChainEquipmentsObjects;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CharacterSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Ability1ChargesLeft;

    FMETA_HeisterLoadout();
};
