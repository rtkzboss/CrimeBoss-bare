#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PowerIKGroundCollision.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKGroundCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RayCastUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RayCastDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableWallCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallOffset;
    
    FPowerIKGroundCollision();
};

