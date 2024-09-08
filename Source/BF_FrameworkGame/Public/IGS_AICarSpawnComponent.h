#pragma once
#include "CoreMinimal.h"
#include "IGS_AIPassengerSpawnComponentBase.h"
#include "IGS_AICarSpawnComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AICarSpawnComponent : public UIGS_AIPassengerSpawnComponentBase {
    GENERATED_BODY()
public:
    UIGS_AICarSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

