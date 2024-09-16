#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ParticleParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ParticleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Power;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> AttachToComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BoneName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreOptimizations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PoolTags;

    FIGS_ParticleParameters();
};
