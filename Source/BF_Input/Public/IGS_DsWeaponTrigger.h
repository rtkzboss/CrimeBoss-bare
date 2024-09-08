#pragma once
#include "CoreMinimal.h"
#include "IGS_DsWeaponTrigger.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsWeaponTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Strength;
    
    BF_INPUT_API FIGS_DsWeaponTrigger();
};

