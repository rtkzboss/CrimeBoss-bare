#pragma once
#include "CoreMinimal.h"
#include "PCSnapConstraintWall.generated.h"

USTRUCT()
struct CONSTRUCTIONSYSTEMRUNTIME_API FPCSnapConstraintWall {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool AttachTop;

    UPROPERTY(EditAnywhere)
    bool AttachBottom;

    UPROPERTY(EditAnywhere)
    bool AttachLeft;

    UPROPERTY(EditAnywhere)
    bool AttachRight;

    FPCSnapConstraintWall();
};
