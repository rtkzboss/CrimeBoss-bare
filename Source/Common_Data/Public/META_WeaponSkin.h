#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponSkinTableRow.h"
#include "META_BaseObject.h"
#include "META_WeaponSkin.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_WeaponSkin : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_WeaponSkin();

    UFUNCTION(BlueprintPure)
    FIGS_WeaponSkinTableRow GetWeaponSkinData();
    
};

