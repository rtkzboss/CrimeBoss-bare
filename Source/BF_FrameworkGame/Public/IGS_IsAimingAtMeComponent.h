#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_IsAimingAtMeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_IsAimingAtMeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_IsAimingAtMeComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(VisibleAnywhere)
    bool IsAimingAtMe;

    UPROPERTY(EditAnywhere)
    float SeePlayerConeHalfAngleDeg;

    UPROPERTY(EditAnywhere)
    float SeePlayerDistance;

    UPROPERTY(EditAnywhere)
    float PlayerAimingAtHalfAngleDeg;

    UPROPERTY(EditAnywhere)
    bool ShouldCheckLineTrace;

};
