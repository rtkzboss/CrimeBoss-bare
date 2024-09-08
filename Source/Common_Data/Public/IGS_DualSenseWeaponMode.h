#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseWeaponMode.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DualSenseWeaponMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OverrideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Strength;
    
    FIGS_DualSenseWeaponMode();
};

