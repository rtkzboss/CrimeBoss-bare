#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactBuffer.generated.h"

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactBuffer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AIGS_ImpactBase*> Impacts;

    UPROPERTY()
    TSubclassOf<AIGS_ImpactBase> ImpactClass;

    FIGS_ImpactBuffer();
};
