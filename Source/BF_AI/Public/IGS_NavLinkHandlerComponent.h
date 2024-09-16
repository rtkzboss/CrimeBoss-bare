#pragma once
#include "CoreMinimal.h"
#include "IGS_TransitionHandlerBaseComponent.h"
#include "IGS_NavLinkHandlerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkHandlerComponent : public UIGS_TransitionHandlerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditAnywhere)
    bool UseSlideForLadder;

    UPROPERTY(EditAnywhere)
    bool CanUseDoors;

};
