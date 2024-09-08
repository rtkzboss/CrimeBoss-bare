#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SentrySenseHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SentrySenseHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastKnowLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SeenTimestamp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 IsSeen: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 IsSeenAndInCone: 1;
    
    BF_AI_API FIGS_SentrySenseHolder();
};

