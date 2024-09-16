#pragma once
#include "CoreMinimal.h"
#include "IGS_MaterialVariantType.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_MaterialVariantType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInstance*> MaterialVariant;

    FIGS_MaterialVariantType();
};
