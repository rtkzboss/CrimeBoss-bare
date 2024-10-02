#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EIGS_DeathDirection.h"
#include "EIGS_TPP_DeathStates.h"
#include "IGS_AnimNotify_FinishMeleeAttackThirdPerson.generated.h"

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_FinishMeleeAttackThirdPerson : public UAnimNotify {
    GENERATED_BODY()
public:
    UIGS_AnimNotify_FinishMeleeAttackThirdPerson();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DeathDirection DeathDirection;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TPP_DeathStates DeathState;

};
