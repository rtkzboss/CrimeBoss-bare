#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentBase.h"
#include "IGS_PlayObjectAnimationDelegate.h"
#include "IGS_AnimatedInteractiveComponentSimple.generated.h"

class UAnimMontage;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentSimple : public UIGS_AnimatedInteractiveComponentBase {
    GENERATED_BODY()
public:
    UIGS_AnimatedInteractiveComponentSimple(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_PlayObjectAnimationDelegate OnPlayObjectAnimation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> ObjectMontageToPlay;

};
