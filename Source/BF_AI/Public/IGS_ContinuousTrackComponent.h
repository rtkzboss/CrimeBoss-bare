#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SprocketOrWheel.h"
#include "IGS_ContinuousTrackComponent.generated.h"

class UInstancedStaticMeshComponent;
class UPoseableMeshComponent;
class USkeletalMesh;
class UStaticMesh;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ContinuousTrackComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UIGS_ContinuousTrackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDriveSprocketAngle(float Angle);

    UFUNCTION(BlueprintPure)
    float GetDriveSprocketAngleAtDistance(float SprocketRadius, float Distance);

private:
    UFUNCTION()
    void CreateSplineCurve();

    UFUNCTION()
    void CreateContinuousTrack();

public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    USkeletalMesh* SK_BaseMesh;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* SM_TrackPieceMesh;

    UPROPERTY(Instanced)
    UPoseableMeshComponent* SK_Base;

    UPROPERTY(Instanced)
    UInstancedStaticMeshComponent* SM_TrackPieces;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TrackPieceLength;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SprocketToTrackMovement;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FSprocketOrWheel> SprocketsAndWheels;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOscillateCurve;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 OscillateCurveCV;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 OscillateEvery;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OscillationScale;

};
