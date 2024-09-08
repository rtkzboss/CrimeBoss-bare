#pragma once
#include "CoreMinimal.h"
#include "EIGS_TemperedGlassStatus.h"
#include "IGS_GlassHit.h"
#include "IGS_GlassStatus.generated.h"

USTRUCT(BlueprintType)
struct FIGS_GlassStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    EIGS_TemperedGlassStatus State;
    
    UPROPERTY()
    TArray<FIGS_GlassHit> PreviousHitPoints;
    
    BF_FRAMEWORKGAME_API FIGS_GlassStatus();
};

