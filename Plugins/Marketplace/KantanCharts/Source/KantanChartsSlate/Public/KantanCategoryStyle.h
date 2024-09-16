#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanCategoryStyle.generated.h"

USTRUCT()
struct FKantanCategoryStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CategoryStyleId;

    UPROPERTY(EditAnywhere)
    FLinearColor Color;

    KANTANCHARTSSLATE_API FKantanCategoryStyle();
};
