#pragma once
#include "CoreMinimal.h"
#include "IGS_MagazineModData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MagazineModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ExtendedAmmoCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ExtendedReserveCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadTimeMultiplier;
    
    FIGS_MagazineModData();
};

