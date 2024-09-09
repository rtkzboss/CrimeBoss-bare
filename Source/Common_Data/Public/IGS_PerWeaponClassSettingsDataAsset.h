#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ClassTagSettingPair.h"
#include "IGS_PerWeaponClassSettingsDataAsset.generated.h"

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_PerWeaponClassSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_PerWeaponClassSettingsDataAsset();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ClassTagSettingPair> PerClassWeaponSettings;
    
};

