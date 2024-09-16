#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFPathFollowerComponent.h"
#include "IGS_VehiclePathFollowerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_VehiclePathFollowerComponent : public UPFPathFollowerComponent {
    GENERATED_BODY()
public:
    UIGS_VehiclePathFollowerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditAnywhere)
    FFloatInterval AvoidanceDistanceRange;

    UPROPERTY(EditAnywhere)
    FFloatInterval AvoidanceStopCooldown;

};
