#pragma once
#include "CoreMinimal.h"
#include "IGS_CachedBuildConfiguration.h"
#include "IGS_BuildConfiguration.generated.h"

class UIGS_BuildConfigurationDataAsset;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_BuildConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> Filters;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UIGS_BuildConfigurationDataAsset> BuildConfigurationDataAsset;
    
    UPROPERTY(Transient)
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset_Holder;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName VariantName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ConnectionName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_CachedBuildConfiguration CachedBuildConfiguration;
    
    FIGS_BuildConfiguration();
};

