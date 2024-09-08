#pragma once
#include "CoreMinimal.h"
#include "IGS_CityMapManagerBaseComponent.h"
#include "IGS_Quickplay_CityMapManagerComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_CityMapManagerComponent : public UIGS_CityMapManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer);

};

