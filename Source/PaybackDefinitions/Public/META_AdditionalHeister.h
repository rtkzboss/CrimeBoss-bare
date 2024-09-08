#pragma once
#include "CoreMinimal.h"
#include "META_AdditionalHeister.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AdditionalHeister {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnique;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Quality;
    
    FMETA_AdditionalHeister();
};

