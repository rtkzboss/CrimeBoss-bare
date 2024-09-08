#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactDataID.generated.h"

class UIGS_ImpactTypeObject;

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactDataID {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UIGS_ImpactTypeObject> ObjectId;
    
    FIGS_ImpactDataID();
};

