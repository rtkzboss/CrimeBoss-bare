#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ContractManagerBaseComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ContractManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ContractManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

