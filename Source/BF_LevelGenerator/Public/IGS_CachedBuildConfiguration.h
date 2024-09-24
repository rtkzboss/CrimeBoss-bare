#pragma once
#include "CoreMinimal.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_CachedBuildConfiguration.generated.h"

class UWorld;
class UIGS_BuildConfigurationDataAsset;

USTRUCT(BlueprintType)
struct FIGS_CachedBuildConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FIGS_ConnectionPointData> ConnectionPoints;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FIGS_VariantDefinition> Variants;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UWorld> Level;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool Initialized;

    BF_LEVELGENERATOR_API FIGS_CachedBuildConfiguration();

	FIGS_CachedBuildConfiguration& operator=(UIGS_BuildConfigurationDataAsset* BCDA);
};
