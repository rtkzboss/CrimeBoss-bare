#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnZiptyingStartedSignature.h"
#include "IGS_WeaponAnimationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_ANIMATIONS_API UIGS_WeaponAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WeaponAnimationComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnZiptyingStartedSignature OnZiptyingStarted;

};
