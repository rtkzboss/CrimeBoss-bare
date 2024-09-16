#pragma once
#include "CoreMinimal.h"
#include "META_CharacterSkinSaveData.h"
#include "META_EquipmentSaveData.h"
#include "META_PerkSaveData.h"
#include "META_WeaponSaveData.h"
#include "META_WeaponSkinSaveData.h"
#include "IGS_Quick_StashManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_StashManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bInited;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_WeaponSaveData> PrimaryWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_WeaponSaveData> SecondaryWeapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_WeaponSkinSaveData> WeaponSkins;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_EquipmentSaveData> Equipment;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_PerkSaveData> Perks;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_CharacterSkinSaveData> BossCharacterSkins;

    FIGS_Quick_StashManagerSaveData();
};
