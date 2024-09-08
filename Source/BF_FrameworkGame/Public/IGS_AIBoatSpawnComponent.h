#pragma once
#include "CoreMinimal.h"
#include "IGS_AIPassengerSpawnComponentBase.h"
#include "IGS_AIBoatSpawnComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIBoatSpawnComponent : public UIGS_AIPassengerSpawnComponentBase {
    GENERATED_BODY()
public:
    UIGS_AIBoatSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

