#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EIGS_EnvironmentVolumeType.h"
#include "IGS_PostProcessVolumeBase.h"
#include "IGS_EnvironmentVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_EnvironmentVolume : public AIGS_PostProcessVolumeBase {
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
    AIGS_EnvironmentVolume(const FObjectInitializer& ObjectInitializer);

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

