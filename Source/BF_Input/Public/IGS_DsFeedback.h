#pragma once
#include "CoreMinimal.h"
#include "IGS_DsFeedback.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DsFeedback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Strength;
    
    BF_INPUT_API FIGS_DsFeedback();
};

