#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "IGS_ModInventoryObject.h"
#include "IGS_UnlockProperties.h"
#include "IGS_WieldableInventoryObjectBase.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDefinitionTableRow.generated.h"

class UIGS_WeaponSkinData;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponDefinitionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_WieldableInventoryObjectBase> FPSWeaponID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID SignatureCharacter;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WeaponSkin;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSoftObjectPtr<UIGS_WeaponSkinData>, TSoftObjectPtr<UTexture2D>> WeaponSkinIconMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality Quality;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowedForGeneration;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;

    FIGS_WeaponDefinitionTableRow();
};
