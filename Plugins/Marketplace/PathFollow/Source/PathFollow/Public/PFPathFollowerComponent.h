#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "EEasingType.h"
#include "EPFFactorOperation.h"
#include "EPFLoopType.h"
#include "EPFRollInterpType.h"
#include "EventPoint.h"
#include "PFEventPoints.h"
#include "PFPathRoller.h"
#include "PFSpeedCurve.h"
#include "ReachedEndSignature.h"
#include "ReachedStartSignature.h"
#include "StartPathSignature.h"
#include "PFPathFollowerComponent.generated.h"

class AActor;
class UEventPointDelegateHolder;
class UPFPathComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATHFOLLOW_API UPFPathFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPFPathFollowerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateAutoRotationPoints();

    UFUNCTION(BlueprintCallable)
    void Stop();

private:
    UFUNCTION()
    void StartImpl();

public:
    UFUNCTION(BlueprintCallable)
    void Start(float StartDelay);

    UFUNCTION(BlueprintCallable)
    void SetPathToFollow(USplineComponent* Spline);

    UFUNCTION(BlueprintCallable)
    void SetPathOwner(AActor* PathOwner);

    UFUNCTION(BlueprintCallable)
    void SetMaxFollowerSpeed(float MaxSpeed);

    UFUNCTION(BlueprintCallable)
    void SetCurrentDistance(float NewDistance);

    UFUNCTION(BlueprintCallable)
    void Reverse(bool Reverse);

    UFUNCTION(BlueprintCallable)
    void Pause();

    UFUNCTION(BlueprintNativeEvent)
    FRotator ModifyFinalRotation(const FRotator& NewRotation);

    UFUNCTION(BlueprintNativeEvent)
    FVector ModifyFinalLocation(const FVector& NewLocation);

    UFUNCTION(BlueprintPure)
    bool HasPath() const;

    UFUNCTION(BlueprintPure)
    float GetSpeedAtSpeedPoint(int32 PointIndex) const;

    UFUNCTION(BlueprintPure)
    float GetSpeedAtDistance(float Distance) const;

    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtDistance(float Distance, ESplineCoordinateSpace::Type Coord) const;

    UFUNCTION(BlueprintCallable)
    UPFPathComponent* GetPathToFollow();

    UFUNCTION(BlueprintPure)
    AActor* GetPathOwner() const;

    UFUNCTION(BlueprintPure)
    FVector GetMoveDirection() const;

    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistance(float Distance, ESplineCoordinateSpace::Type Coord) const;

    UFUNCTION(BlueprintCallable)
    FPFEventPoints GetEventPoints();

    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateByName(const FName& Name);

    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateByIndex(int32 Index);

    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateAll();

    UFUNCTION(BlueprintCallable)
    FEventPoint GetEventPointByName(const FName& Name);

    UFUNCTION(BlueprintCallable)
    void FollowPath(float FollowStep);

    UFUNCTION(BlueprintCallable)
    bool EventPointExistByName(const FName& Name);

    UFUNCTION(BlueprintNativeEvent)
    FRotator ComputeLookAtRotation(USceneComponent* TargetComponent, const FVector& FollowerLocation);

    UFUNCTION()
    void ComputeAutoRotationPoints();

    UFUNCTION(BlueprintCallable)
    void ClearMaxFollowerSpeed();

    UPROPERTY(BlueprintAssignable)
    FReachedEndSignature OnReachedEnd;

    UPROPERTY(BlueprintAssignable)
    FReachedStartSignature OnReachedStart;

    UPROPERTY(BlueprintAssignable)
    FStartPathSignature OnStartPath;

    UPROPERTY(BlueprintReadWrite)
    FVector FinalLocation;

    UPROPERTY(BlueprintReadWrite)
    FRotator FinalRotation;

private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> PathOwner;

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTeleportPhysics;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TickInterval;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHidePathInfoText;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedDuration;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TimeBased;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFollowRotation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSpeedCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePathSpeedPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPFFactorOperation SpeedFactorOperation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedFactor;

    UPROPERTY()
    FPFSpeedCurve _speedCurve;

    UPROPERTY()
    float _SpeedCurveCoef;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInterpCurveFloat _InterpSpeedCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEasingType EasingType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CurveDegree;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPFLoopType LoopType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartAtPlay;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartDelay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReverse;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertRotationOnReverse;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAhead;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bComputeRollOnDrive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRotationCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePathPitchAndYaw;

    UPROPERTY(EditAnywhere)
    bool bAutoRecompute;

    UPROPERTY(EditAnywhere)
    bool bKeepRelativeDistances;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RotationPointSteps;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool GenerateOnSplineControlPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollSampleDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClampGeneratedAngles;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollAnglesClampMax;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollAnglesClampMin;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPFRollInterpType RollIntepType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPFFactorOperation RotationFactorOperation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationFactor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RotationMaskLocal;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector RotationUpdateMask;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntVector LocationUpdateMask;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideRotationCurve;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPFPathRoller _PathRoller;

    UPROPERTY(BlueprintReadWrite, Instanced)
    USceneComponent* LookAtComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtEvenIfNotStarted;

    UPROPERTY(BlueprintReadOnly)
    bool bStarted;

    UPROPERTY(BlueprintReadOnly)
    bool bPause;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlignToPathStart;

    UPROPERTY(BlueprintReadOnly)
    float CurrentDistanceOnPath;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePathEventPoints;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPFEventPoints EventPoints;

private:
    UPROPERTY(Export)
    TWeakObjectPtr<USplineComponent> SplineToFollow;

    UPROPERTY()
    float _pathDuration;

    UPROPERTY()
    float _currSplineLength;

    UPROPERTY()
    float _ElapsedTime;

    UPROPERTY()
    FTimerHandle _DelayTimer;

    UPROPERTY()
    float _lastTickTime;

    UPROPERTY()
    int32 _LastPassedEventIndex;

    UPROPERTY()
    float MaxFollowerSpeed;

    UPROPERTY()
    bool MaxFollowerSpeedSet;

};
