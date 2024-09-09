#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_ScanLookAtTriggerComponent.generated.h"

class AActor;
class UIGS_LookAtTriggerComponent;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ScanLookAtTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ScanLookAtTriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScanEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreComponents(TArray<UPrimitiveComponent*> inIgnoreActorComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreActors(TArray<AActor*> inIgnoreActors);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Trigger(UIGS_LookAtTriggerComponent* inInteractiveComponent);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScreenPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsScanEnabled;
    
};

