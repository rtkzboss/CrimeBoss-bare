#pragma once
#include "CoreMinimal.h"
#include "IGS_SentrySenseHolder.h"
#include "IGS_SentryEnemyHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_SentryEnemyHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> Enemy;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_SentrySenseHolder SenseHolder;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DetectionMeter;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 Detected: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 Detecting: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 Spotted: 1;
    
    BF_AI_API FIGS_SentryEnemyHolder();
};

