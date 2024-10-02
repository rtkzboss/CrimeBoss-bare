#pragma once
#include "CoreMinimal.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_WeaponInventoryObject.h"
#include "GameplayTagContainer.h"
#include "META_EquipmentSaveData.h"
#include "META_WeaponSaveData.h"
#include "Templates/SubclassOf.h"
#include "META_HeisterLoadoutSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_HeisterLoadoutSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_WeaponSaveData PrimaryWeaponSaveData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> PrimaryPersonalWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_WeaponSaveData SecondaryWeaponSaveData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> SecondaryPersonalWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> MeleeWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_WeaponSaveData MeleeWeaponSaveData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> MeleePersonalWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_EquipmentSaveData SelectedEquipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CharacterSkin;

    FMETA_HeisterLoadoutSave();
};
