#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerFramework.h"
#include "IGS_SentryControllerBase.generated.h"

class AIGS_DetectorBase;
class UIGS_BehaviorTreeGameComponent;
class UIGS_BlackboardGameComponent;
class UIGS_SentryAggroComponent;
class UIGS_SentryMemoryComponent;
class UIGS_SentryPerceptionComponent;

UCLASS()
class BF_AI_API AIGS_SentryControllerBase : public AIGS_SentryControllerFramework {
    GENERATED_BODY()
public:
    AIGS_SentryControllerBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SquadID;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SentryMemoryComponent* Memory;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SentryAggroComponent* Aggro;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SentryPerceptionComponent* Perception;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_BlackboardGameComponent* BlackboardGameComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_BehaviorTreeGameComponent* BehaviorTreeGameComponent;
    
};

