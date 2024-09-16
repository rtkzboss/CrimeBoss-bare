#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerBotControllerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_PlayerBotControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerBotControllerComponent(const FObjectInitializer& ObjectInitializer);

};
