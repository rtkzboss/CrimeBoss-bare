#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/MeshComponent.h"
#include "Engine/NetSerialization.h"
#include "EIGS_RopeType.h"
#include "IGS_RopeMaterialSettings.h"
#include "IGS_RopeComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RopeComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PlayerAttachmentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedOfSimulation;
    
    UPROPERTY(EditAnywhere)
    float UpdatedHandsPointsStartTime;
    
    UPROPERTY(EditAnywhere)
    float ActorInterpolationSpeed;
    
    UPROPERTY(EditAnywhere)
    float EndInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector RopeActorOffset;
    
    UPROPERTY(EditAnywhere)
    bool UseRopeLengthOffset;
    
    UPROPERTY(EditAnywhere)
    float RopeLengthOffset;
    
    UPROPERTY(EditAnywhere)
    bool IsRollingOffRopeAllowed;
    
    UPROPERTY(EditAnywhere)
    float RollOffDelay;
    
    UPROPERTY(EditAnywhere)
    float EnableVisibilityDelay;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval RollOffSpeed;
    
    UPROPERTY(EditAnywhere)
    float PlayerStopUsingVelocityLimit;
    
    UPROPERTY(EditAnywhere)
    FIGS_RopeMaterialSettings MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachStart;
    
    UPROPERTY(EditAnywhere)
    FComponentReference AttachEndTo;
    
    UPROPERTY(EditAnywhere)
    FName AttachEndToSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumSegments;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float SubstepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SolverIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bEnableStiffness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bUseSubstepping;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSkipCableUpdateWhenNotVisible;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float CollisionFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CableForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TileMaterial;
    
    UPROPERTY(Replicated)
    EIGS_RopeType RopeType;
    
protected:
    UPROPERTY()
    AActor* m_AttachedActor;
    
    UPROPERTY(Replicated)
    FVector_NetQuantize mR_StartPosition;
    
    UPROPERTY(Replicated)
    FVector_NetQuantize mR_EndPosition;
    
    UPROPERTY(Replicated)
    bool mR_AllowMoveEndPoint;
    
    UPROPERTY(Replicated)
    bool mR_Limitvelocity;
    
    UPROPERTY(Replicated)
    bool mR_LockEndParticle;
    
    UPROPERTY(Replicated)
    bool mR_RollOffRope;
    
public:
    UIGS_RopeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
    
    UFUNCTION(BlueprintPure)
    void GetCableParticleLocations(TArray<FVector>& Locations) const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetAttachedComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachedActor() const;
    
};

