#pragma once
#include "CoreMinimal.h"
#include "IGS_RopeMaterialSettings.generated.h"

USTRUCT()
struct FIGS_RopeMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParNameTilingU;
    
    UPROPERTY(EditAnywhere)
    float MaterialTilingU;
    
    BF_FRAMEWORKGAME_API FIGS_RopeMaterialSettings();
};

