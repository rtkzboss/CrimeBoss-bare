#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"
#include "IGS_GeneratorBuildConfiguration.generated.h"

class UIGS_BuildConfigurationDataAsset;

UCLASS(BlueprintType)
class BF_LEVELGENERATOR_API UIGS_GeneratorBuildConfiguration : public UObject {
    GENERATED_BODY()
public:
    UIGS_GeneratorBuildConfiguration();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> Filters;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_BuildConfigurationDataAsset* BuildConfigurationDataAsset;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName VariantName;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ConnectionName;

    UPROPERTY()
    TArray<FIGS_ConnectionPointData> Cooked_ConnectionPoints;

    UPROPERTY()
    TArray<FIGS_VariantDefinition> Cooked_Variants;

};
