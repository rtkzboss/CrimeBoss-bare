#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "IGS_PaperDollAnimInstance.generated.h"

class AIGS_CharacterPaperDoll;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_PaperDollAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_PaperDollAnimInstance();

    UFUNCTION(BlueprintPure)
    AIGS_CharacterPaperDoll* GetOwningPaperDoll() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtAnim;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MetaCutsceneCharacterPose CurrentCharacterPose;

    UPROPERTY(BlueprintReadWrite)
    FPoseSnapshot HeadSnapshot;

};
