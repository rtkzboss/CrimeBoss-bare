#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_PerkDataToFPS.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "CommonHeisterLoadout.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonHeisterLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> PrimaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag PrimaryWeaponSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> SecondaryWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SecondaryWeaponSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> MeleeWeapon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MeleeWeaponSkin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> Equipment;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FMETA_PerkDataToFPS> Perks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Ability1ChargesLeft;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CharacterSkinID;

    FCommonHeisterLoadout();
};
