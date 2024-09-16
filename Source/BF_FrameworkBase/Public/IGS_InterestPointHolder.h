#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_InterestPointHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_InterestPointHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> Actor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PointOrOffset;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;

    FIGS_InterestPointHolder();
};
