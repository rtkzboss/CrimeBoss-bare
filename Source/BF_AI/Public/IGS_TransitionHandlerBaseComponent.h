#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_TransitionState.h"
#include "IGS_TransitionHandlerBaseComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_TransitionHandlerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_TransitionHandlerBaseComponent(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(EditAnywhere)
    float AngleToStartTransition;
    
    UPROPERTY(EditAnywhere)
    float DistToStartTransition;
    
    UPROPERTY(EditAnywhere)
    EIGS_TransitionState m_State;
    
};

