#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManagerModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_WaveManagerModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnedEnemiesAddition;
    
    FIGS_WaveManagerModifierDef();
};

