#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_WeaponSkinMaterial.h"
#include "IGS_WeaponSkinData.generated.h"

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_WeaponSkinData : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_WeaponSkinData();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FIGS_WeaponSkinMaterial> SkinMaterialSlot;

};
