#pragma once
#include "CoreMinimal.h"
#include "META_BonusSetup.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_BonusSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Repetition;
    
    FMETA_BonusSetup();
};

