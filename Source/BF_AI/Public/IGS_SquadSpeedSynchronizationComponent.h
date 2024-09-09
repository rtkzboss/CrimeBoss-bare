#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SquadSpeedSynchronizationComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SquadSpeedSynchronizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SquadSpeedSynchronizationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(VisibleAnywhere)
    TMap<AIGS_GameCharacterFramework*, float> NextSpeedChange;
    
    UPROPERTY(VisibleAnywhere)
    TArray<float> TmpDistanceToDestination;
    
};

