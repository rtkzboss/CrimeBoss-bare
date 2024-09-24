#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_BuildConfigurationDataAsset.generated.h"

class UWorld;
struct FIGS_CachedBuildConfiguration;

UCLASS(BlueprintType)
class BF_LEVELGENERATOR_API UIGS_BuildConfigurationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_BuildConfigurationDataAsset();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_ConnectionPointData> ConnectionPoints;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_VariantDefinition> Variants;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UWorld> Level;

	UIGS_BuildConfigurationDataAsset& operator=(FIGS_CachedBuildConfiguration&& BC);
};
