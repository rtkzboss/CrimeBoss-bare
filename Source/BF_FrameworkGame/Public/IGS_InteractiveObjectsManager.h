#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_InteractiveObjectsManager.generated.h"

class UIGS_InteractiveComponent;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_InteractiveObjectsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_InteractiveObjectsManager();

    UFUNCTION()
    void UnregisterInteractiveComponent(UIGS_InteractiveComponent* InComponent);

    UFUNCTION()
    void RegisterInteractiveComponent(UIGS_InteractiveComponent* InComponent);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_InteractiveObjectsManager* Instance(const UObject* inWorldContextObject);

    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UIGS_InteractiveComponent*> InteractiveComponents;

    UPROPERTY()
    bool bAlreadyReset;

};
