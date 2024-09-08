#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_ThrowGrenade.generated.h"

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_ThrowGrenade : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Throw_Low;
    
    UIGS_AnimNotify_ThrowGrenade();

};

