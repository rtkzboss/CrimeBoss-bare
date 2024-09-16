#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_MocapEvent.generated.h"

UCLASS(CollapseCategories)
class BF_AI_API UIGS_AnimNotify_MocapEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UIGS_AnimNotify_MocapEvent();

    UPROPERTY(EditAnywhere)
    FName EventName;

};
