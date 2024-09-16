#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaCutsceneCharacterPose.h"
#include "IGS_MetaCutsceneCharacterPoseData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneCharacterPoseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MetaCutsceneCharacterPose PoseType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> Variations;

    FIGS_MetaCutsceneCharacterPoseData();
};
