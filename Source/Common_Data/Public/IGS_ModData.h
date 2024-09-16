#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "IGS_BarrelModData.h"
#include "IGS_CommonItemData.h"
#include "IGS_CommonModData.h"
#include "IGS_MagazineModData.h"
#include "IGS_ScopeModData.h"
#include "IGS_VisibilityModData.h"
#include "IGS_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ModData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WeaponInventoryObject> CompatibleWeapon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ModType ModType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> ModMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CommonModData CommonModData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_BarrelModData BarrelModData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_ScopeModData ScopeModData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_MagazineModData MagazineModData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_VisibilityModData VisibilityModData;

    FIGS_ModData();
};
