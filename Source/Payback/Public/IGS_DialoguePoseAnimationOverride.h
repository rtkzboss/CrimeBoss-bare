#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "IGS_DialoguePoseAnimationOverride.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_DialoguePoseAnimationOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TMap<EIGS_MetaDialogueCharacterSlot, UAnimMontage*> PoseAnimations;

    FIGS_DialoguePoseAnimationOverride();
};
