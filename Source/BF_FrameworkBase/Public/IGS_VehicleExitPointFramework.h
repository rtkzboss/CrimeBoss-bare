#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_VehicleExitPointFramework.generated.h"

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_VehicleExitPointFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_VehicleExitPointFramework(const FObjectInitializer& ObjectInitializer);

};

