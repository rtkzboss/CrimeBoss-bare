#include "IGS_GeneralListenerController.h"
#include "Perception/AIPerceptionComponent.h"

AIGS_GeneralListenerController::AIGS_GeneralListenerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComp"));
    (*this).PerceptionComponent = gen;
}

void AIGS_GeneralListenerController::OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus) {
}

