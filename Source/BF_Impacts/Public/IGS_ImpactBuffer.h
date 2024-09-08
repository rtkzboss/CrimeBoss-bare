#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactBuffer.generated.h"

class AIGS_ImpactBase;

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

