#pragma once
#include "CoreMinimal.h"
#include "EMETA_ChangedHeisterAttribute.h"
#include "META_ChangedHeisterAttributeInfo.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_ChangedHeisterAttributeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ChangedHeisterAttribute Attribute;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeMultiplier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysDuration;

    FMETA_ChangedHeisterAttributeInfo();
};
