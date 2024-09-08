#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_ExplosionParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_ExplosionParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize Origin;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> CausingActor;
    
    UPROPERTY()
    float EffectRadius;
    
    BF_FRAMEWORKGAME_API FIGS_ExplosionParams();
};

