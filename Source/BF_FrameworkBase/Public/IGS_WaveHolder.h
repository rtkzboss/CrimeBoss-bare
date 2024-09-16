#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_WaveHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_WaveHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Amount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Random;

    BF_FRAMEWORKBASE_API FIGS_WaveHolder();
};
