#pragma once
#include "CoreMinimal.h"
#include "IGS_DefaultWeaponModData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DefaultWeaponModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultMagazineMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultStockMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultSightMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultDynamicSightMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultBarrelMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DefaultVisibilityMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultZoomMagnification;

    FIGS_DefaultWeaponModData();
};
