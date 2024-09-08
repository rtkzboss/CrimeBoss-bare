#pragma once
#include "CoreMinimal.h"
#include "PCSnapConstraintFloor.generated.h"

USTRUCT(BlueprintType)
struct CONSTRUCTIONSYSTEMRUNTIME_API FPCSnapConstraintFloor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool AttachX;
    
    UPROPERTY(EditAnywhere)
    bool AttachXNegative;
    
    UPROPERTY(EditAnywhere)
    bool AttachY;
    
    UPROPERTY(EditAnywhere)
    bool AttachYNegative;
    
    UPROPERTY(EditAnywhere)
    bool AttachZ;
    
    UPROPERTY(EditAnywhere)
    bool AttachZNegative;
    
    FPCSnapConstraintFloor();
};

