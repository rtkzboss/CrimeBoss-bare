#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EIGS_CivOffenceReactionBehavior.h"
#include "IGS_BTDecorator_OffenceAmbientReaction.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_OffenceAmbientReaction : public UBTDecorator {
    GENERATED_BODY()
public:
    UIGS_BTDecorator_OffenceAmbientReaction();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

    UPROPERTY(EditAnywhere)
    EIGS_CivOffenceReactionBehavior DesiredBehavior;

};
