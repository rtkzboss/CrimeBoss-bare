#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "EIGS_EnvironmentVolumeType.h"
#include "IGS_EnvironmentBoxComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_EnvironmentBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float EffectBlendStartDuration;
    
    UPROPERTY(EditAnywhere)
    float EffectBlendStopDuration;
    
protected:
    UPROPERTY(EditAnywhere)
    EIGS_EnvironmentVolumeType VolumeType;
    
    UPROPERTY(EditAnywhere)
    bool m_IsEnabled;
    
public:
    UIGS_EnvironmentBoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inNewIsEnabled);
    
private:
    UFUNCTION()
    void OnEnvironmentVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void OnEnvironmentVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetEnabled() const;
    
};

