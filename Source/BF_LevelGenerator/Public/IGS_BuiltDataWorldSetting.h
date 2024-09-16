#pragma once
#include "CoreMinimal.h"
#include "IGS_BuiltDataWorldSetting.generated.h"

USTRUCT()
struct BF_LEVELGENERATOR_API FIGS_BuiltDataWorldSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUsesRotatedData;

    UPROPERTY(EditAnywhere)
    bool bUsedWithGenerator;

    FIGS_BuiltDataWorldSetting();
};
