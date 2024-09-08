#pragma once
#include "CoreMinimal.h"
#include "IGS_AmmoBoxData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AmmoBoxData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinAmmoPercent;
    
    UPROPERTY(EditAnywhere)
    float MaxAmmoPercent;
    
    FIGS_AmmoBoxData();
};

