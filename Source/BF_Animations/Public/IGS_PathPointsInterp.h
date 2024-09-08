#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FlyingCurveInterpolationMode.h"
#include "IGS_PathPointsInterp.generated.h"

class ATargetPoint;

UCLASS(Config=Inherit)
class BF_ANIMATIONS_API AIGS_PathPointsInterp : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FlyingCurveInterpolationMode CurveInterpolationMode;
    
    UPROPERTY(EditAnywhere)
    float NumberOfSteps;
    
    UPROPERTY(EditAnywhere)
    float RotationSmoothness;
    
    UPROPERTY(EditAnywhere)
    float LocationSmoothness;
    
    UPROPERTY(EditAnywhere)
    AActor* ActorToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExecuteOnce;
    
    UPROPERTY(EditAnywhere)
    TArray<ATargetPoint*> TargetPoints;
    
    UPROPERTY(EditAnywhere)
    bool Debug;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ActorDirection;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> m_Nodes;
    
public:
    AIGS_PathPointsInterp(const FObjectInitializer& ObjectInitializer);

};

