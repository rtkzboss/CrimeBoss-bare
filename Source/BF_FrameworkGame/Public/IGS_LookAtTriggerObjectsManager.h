#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LookAtTriggerObjectsManager.generated.h"

class UIGS_LookAtTriggerComponent;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_LookAtTriggerObjectsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_LookAtTriggerObjectsManager();

    UFUNCTION()
    void UnregisterInteractiveComponent(UIGS_LookAtTriggerComponent* InComponent);

    UFUNCTION()
    void RegisterInteractiveComponent(UIGS_LookAtTriggerComponent* InComponent);

};
