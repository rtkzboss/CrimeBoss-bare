#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "IGS_ChildActorComponentWithNotify.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ChildActorComponentWithNotify : public UChildActorComponent {
    GENERATED_BODY()
public:
    UIGS_ChildActorComponentWithNotify(const FObjectInitializer& ObjectInitializer);

};

