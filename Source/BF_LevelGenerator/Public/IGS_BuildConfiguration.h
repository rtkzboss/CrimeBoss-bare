#pragma once
#include "CoreMinimal.h"
#include "IGS_CachedBuildConfiguration.h"
#include "IGS_BuildConfiguration.generated.h"

class UIGS_BuildConfigurationDataAsset;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_BuildConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FString> Filters;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UIGS_BuildConfigurationDataAsset> BuildConfigurationDataAsset;

    UPROPERTY(Transient)
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset_Holder;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName VariantName;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName ConnectionName;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FIGS_CachedBuildConfiguration CachedBuildConfiguration;

    FIGS_BuildConfiguration();

	void SetBuildConfiguration(UIGS_BuildConfigurationDataAsset* BCDA);
};
