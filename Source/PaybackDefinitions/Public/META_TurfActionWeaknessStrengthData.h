#pragma once
#include "CoreMinimal.h"
#include "META_TurfActionWeaknessStrengthData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_TurfActionWeaknessStrengthData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LowChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MediumChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HighChance;
    
    FMETA_TurfActionWeaknessStrengthData();
};

