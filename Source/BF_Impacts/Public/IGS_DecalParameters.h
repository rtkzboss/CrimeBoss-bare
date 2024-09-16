#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_DecalParameters.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_DecalParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RandomRoll;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollDegree;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachToSocket;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> AttachToComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreOptimizations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PoolTags;

    FIGS_DecalParameters();
};
