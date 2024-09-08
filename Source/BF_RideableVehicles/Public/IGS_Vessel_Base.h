#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_RideableVehicle_Base.h"
#include "IGS_VesselParticleData.h"
#include "IGS_Vessel_Base.generated.h"

class AActor;
class UBoxComponent;
class UBuoyancyComponent;
class UCurveFloat;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Config=Inherit)
class BF_RIDEABLEVEHICLES_API AIGS_Vessel_Base : public AIGS_RideableVehicle_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector> PontoonLocations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PontoonRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool MirrorPontoons;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SteerForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* SwingForceOverSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* BuoyancyCoefficientOverSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementForceMultiplierSimpleImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwingSpeedMultiplierSimpleImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BankingForceMultiplierSimpleImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltBackForceMultiplierSimpleImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InJumpGravityMultiplierSimpleImpulse;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FrontPartPontoonIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EngineBladesPontoonIndex;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlayerBlockBoxComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LeftEngineParticleEffect;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RightEngineParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LeftBoardParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CenterBoardParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RightBoardParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBuoyancyComponent* Buoyancy;
    
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    float Steer;
    
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    float Throttle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FPSCoeficient;
    
    UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParticleParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParticleSpeedTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EngineInitialScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideBoardInitialScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FIGS_VesselParticleData> PontoonWaterStatus;
    
    UPROPERTY(Replicated, Transient)
    TArray<FTransform> m_PlayerExitPositions;
    
public:
    AIGS_Vessel_Base(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Server, Unreliable)
    void SyncControls_SERVER(float inSteering, float inThrottle);
    
    UFUNCTION()
    void SyncControls();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetExitTransform(TArray<FTransform> inNewPositions);
    
private:
    UFUNCTION()
    void PreventFlipUp() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnEntryTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
public:
    UFUNCTION()
    void MoveRight(float inAxis);
    
    UFUNCTION()
    void MoveForward(float inAxis);
    
};

