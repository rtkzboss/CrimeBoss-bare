#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManagerModifierDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_WaveManagerModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxSpawnedEnemiesAddition;
    
    FIGS_WaveManagerModifierDef();
};

