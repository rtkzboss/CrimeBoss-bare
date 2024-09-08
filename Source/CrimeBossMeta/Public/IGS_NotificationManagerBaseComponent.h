#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_NotificationManagerBaseComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_NotificationManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_NotificationManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

};

