#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Components/SplineComponent.h"
#include "DrawerData.h"
#include "PFAutoRollVisualConfig.h"
#include "PFEventPoints.h"
#include "PFEventPointsVisualization.h"
#include "PFPathRoller.h"
#include "PFSpeedCurve.h"
#include "PFSpeedPointsDrawConfig.h"
#include "PFPathComponent.generated.h"

class UPFPathFollowerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATHFOLLOW_API UPFPathComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDrawerData DrawerConfig;
    
    UPROPERTY(EditAnywhere)
    FPFEventPointsVisualization EventPointsVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPFEventPoints EventPoints;
    
    UPROPERTY(EditAnywhere)
    FPFPathRoller _PathRoller;
    
    UPROPERTY(EditAnywhere)
    FPFSpeedCurve _speedCurve;
    
    UPROPERTY(EditAnywhere)
    bool MirrorAroundX;
    
    UPROPERTY(EditAnywhere)
    bool ReversePath;
    
    UPROPERTY(EditAnywhere)
    FPFAutoRollVisualConfig AutoRollDebugConfig;
    
    UPROPERTY(EditAnywhere)
    FPFSpeedPointsDrawConfig SpeedPointDrawConfig;
    
    UPROPERTY(Instanced)
    UPFPathFollowerComponent* _FollowerComponent;
    
    UPFPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetTimeForPath();
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtSplinePointMirrored(int32 PointIdx, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtSplineInputKeyMirrored(float Key, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistanceAlongSplineMirrored(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
};

