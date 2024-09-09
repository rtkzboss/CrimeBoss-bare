#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleBase.h"
#include "IGS_VehicleCarTest.generated.h"

class USceneComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_VehicleCarTest : public AIGS_VehicleBase {
    GENERATED_BODY()
public:
    AIGS_VehicleCarTest(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<USceneComponent*> Wheels;
    
    UPROPERTY(EditAnywhere)
    float MaxUpSuspension;
    
    UPROPERTY(EditAnywhere)
    float MaxDownSuspension;
    
    UPROPERTY(EditAnywhere)
    float WheelRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GravityDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WheelTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WheelTurnSpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float followDistance;
    
};

