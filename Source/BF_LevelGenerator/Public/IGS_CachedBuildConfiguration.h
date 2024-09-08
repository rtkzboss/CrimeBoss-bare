#pragma once
#include "CoreMinimal.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_CachedBuildConfiguration.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FIGS_CachedBuildConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_ConnectionPointData> ConnectionPoints;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_VariantDefinition> Variants;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Initialized;
    
    BF_LEVELGENERATOR_API FIGS_CachedBuildConfiguration();
};

