#pragma once
#include "CoreMinimal.h"
#include "IGS_StrafeRecord.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_StrafeRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY(VisibleAnywhere)
    float Time;
    
    FIGS_StrafeRecord();
};

