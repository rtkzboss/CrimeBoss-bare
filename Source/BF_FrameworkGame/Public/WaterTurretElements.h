#pragma once
#include "CoreMinimal.h"
#include "WaterTurretElements.generated.h"

class AIGS_WaterCannon;
class USplineComponent;
class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FWaterTurretElements {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_WaterCannon* Turret;
    
    UPROPERTY(Instanced)
    USplineComponent* Hose;
    
    UPROPERTY(Instanced)
    TArray<USplineMeshComponent*> HoseMeshes;
    
    BF_FRAMEWORKGAME_API FWaterTurretElements();
};

