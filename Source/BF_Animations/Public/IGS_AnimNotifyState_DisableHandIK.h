#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_AnimNotifyState_DisableHandIK.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_AnimNotifyState_DisableHandIK : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UIGS_AnimNotifyState_DisableHandIK();

    UPROPERTY(EditAnywhere)
    bool LeftHandIKdisabled;
    
    UPROPERTY(EditAnywhere)
    bool RightHandIKdisabled;
    
};

