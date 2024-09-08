#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponSkinMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* TortillaMaterial;
    
    FIGS_WeaponSkinMaterial();
};

