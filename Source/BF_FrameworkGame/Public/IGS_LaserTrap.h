#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_LaserTrap.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UArrowComponent;
class UBoxComponent;
class UCurveFloat;
class UMaterialInterface;
class UParticleSystemComponent;
class UPointLightComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;
class UTimelineComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_LaserTrap : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootObject;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* BeamOrigin;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* BeamDetectionBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UArrowComponent* BeamDirectionArrow;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UParticleSystemComponent* BeamEmitter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* LaserMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPointLightComponent* StatusLight;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LaserOnAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LaserOffAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LaserChargingAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LaserDetectionAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkRtpc* LaserChargingAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LaserMeshOffMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LaserMeshOnMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* LightIntensityCurve;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UTimelineComponent* LightTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFromStart;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnSetEnabled)
    bool mR_bIsEnabled;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnSetBeamEnabled)
    bool mR_bIsBeamEnabled;
    
    UPROPERTY(ReplicatedUsing=OnRep_RecalculateBeam)
    FVector mR_EndBeamPoint;
    
public:
    AIGS_LaserTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inState, bool inIgnoreChargeTime);
    
protected:
    UFUNCTION()
    void SetBeamEnabledDelayed(bool inState);
    
    UFUNCTION()
    void OnRep_RecalculateBeam() const;
    
    UFUNCTION()
    void OnRep_OnSetEnabled() const;
    
    UFUNCTION()
    void OnRep_OnSetBeamEnabled();
    
    UFUNCTION(NetMulticast, Unreliable)
    void OnPlayerDetected();
    
    UFUNCTION()
    void OnLightTimelineUpdate(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnBeamEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeamBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

