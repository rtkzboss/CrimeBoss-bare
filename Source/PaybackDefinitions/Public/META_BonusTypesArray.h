#pragma once
#include "CoreMinimal.h"
#include "EMETA_BonusType.h"
#include "META_BonusTypesArray.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BonusTypesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_BonusType> Bonuses;
    
    FMETA_BonusTypesArray();
};

