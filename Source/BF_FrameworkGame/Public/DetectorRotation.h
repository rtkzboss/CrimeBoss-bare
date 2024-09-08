#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DetectorRotation.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UDetectorRotation : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USceneComponent* RotationPoint;
    
    UPROPERTY(ReplicatedUsing=OnRep_LookAtTarget)
    FIGS_InterestPointHolder LookAtTarget;
    
    UPROPERTY()
    float FullRotationSpeed;
    
    UPROPERTY()
    float FollowRotationSpeed;
    
    UPROPERTY()
    float PatrollingRotationSpeed;
    
    UPROPERTY()
    float ControlledRotationSpeed;
    
    UPROPERTY()
    float TotalHorizontalRotationAngleDegrees;
    
    UPROPERTY()
    float TotalVerticalRotationAngleDegrees;
    
    UDetectorRotation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void UpdateRotationPointByDelta(float inHorizontalDeltaRotation, float inVerticalDeltaRotation);
    
    UFUNCTION()
    void OnRep_LookAtTarget(FIGS_InterestPointHolder inPreviousLookAtTarget);
    
    UFUNCTION()
    bool IsCloseToFollowedPoint(float inDesiredHorzintalAngle, float inDesiredVerticalAngle) const;
    
    UFUNCTION()
    void FullRotation(FVector inTarget, float inDeltaSeconds);
    
};

