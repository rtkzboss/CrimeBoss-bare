#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "IGS_BagInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_NETWORK_API FIGS_BagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BagCount;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EIGS_BagType> BagTypes;

    FIGS_BagInfo();
};
