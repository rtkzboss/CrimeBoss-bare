#pragma once
#include "CoreMinimal.h"
#include "EIGS_DamageEventType.h"
#include "IGS_HealInfo.generated.h"

class AActor;
class AController;
class APawn;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_HealInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<APawn> InstigatorPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> SourceActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_DamageEventType DamageEventType;
    
    FIGS_HealInfo();
};

