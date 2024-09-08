#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "InstancedBreakableWindowParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FInstancedBreakableWindowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* ParticleImpactOverride;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InstanceParticleWidth;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InstanceParticleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InstanceParticleAmount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector InstanceLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator InstanceRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector InstanceParticleVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TArray<FParticleSysParam> InstanceParticleParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BulletsToDestroyInstance;
    
    BF_FRAMEWORKGAME_API FInstancedBreakableWindowParam();
};

