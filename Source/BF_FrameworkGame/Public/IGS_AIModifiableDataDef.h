#pragma once
#include "CoreMinimal.h"
#include "IGS_AIModifiableDataDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIModifiableDataDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    bool bOverloadValue;
    
    FIGS_AIModifiableDataDef();
};

