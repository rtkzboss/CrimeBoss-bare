#pragma once
#include "CoreMinimal.h"
#include "IGS_AggroHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_AggroHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TotalDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NormalizedDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GlobalAggro;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsClose;
    
    BF_AI_API FIGS_AggroHolder();
};

