#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponStatUIData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponStatUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText Name;

    UPROPERTY(BlueprintReadWrite)
    float Value;

    UPROPERTY(BlueprintReadWrite)
    bool DisplayAsBar;

    FIGS_WeaponStatUIData();
};
