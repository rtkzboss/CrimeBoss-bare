#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ImpactTypeObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_FootstepsBaseComponent.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_FootstepsBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditAnywhere)
    bool bMakesNoise;

    UPROPERTY(EditAnywhere)
    float LandingNoiseRange;

    UPROPERTY(EditAnywhere)
    float JumpingNoiseRange;

    UPROPERTY(EditAnywhere)
    float WalkingNoiseRange;

    UPROPERTY(EditAnywhere)
    float RunningNoiseRange;

    UPROPERTY(EditAnywhere)
    float SprintingNoiseRange;

    UPROPERTY(EditAnywhere)
    float CrouchingNoiseRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> ImpactID;

};
