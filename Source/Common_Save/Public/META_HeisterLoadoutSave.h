#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_EquipmentSaveData.h"
#include "META_WeaponSaveData.h"
#include "Templates/SubclassOf.h"
#include "META_HeisterLoadoutSave.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_WeaponInventoryObject;

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
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_EquipmentSaveData SelectedEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CharacterSkin;
    
    FMETA_HeisterLoadoutSave();
};

