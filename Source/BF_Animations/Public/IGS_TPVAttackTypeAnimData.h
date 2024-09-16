#pragma once
#include "CoreMinimal.h"
#include "IGS_TPVAnimtionDefinition.h"
#include "IGS_TPVAttackTypeAnimData.generated.h"

USTRUCT()
struct FIGS_TPVAttackTypeAnimData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIGS_TPVAnimtionDefinition AnimationTypeData;

    BF_ANIMATIONS_API FIGS_TPVAttackTypeAnimData();
};
