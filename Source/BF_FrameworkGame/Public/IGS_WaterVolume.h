#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "GameFramework/PhysicsVolume.h"
#include "Engine/Scene.h"
#include "EWaterType.h"
#include "IGS_WaterVolume.generated.h"

class AActor;
class UAudioComponent;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_WaterVolume : public APhysicsVolume, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWaterType::Type> WaterType;
    
    UPROPERTY(EditAnywhere)
    USoundBase* UnderWaterLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    UPROPERTY(Instanced, Transient)
    UAudioComponent* m_AudioComponent;
    
public:
    AIGS_WaterVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    

    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) override { return false; }
    virtual FPostProcessVolumeProperties GetProperties() const override { return {}; }
};

