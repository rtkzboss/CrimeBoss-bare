#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactTypeObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactDataID.generated.h"

USTRUCT()
struct BF_IMPACTS_API FIGS_ImpactDataID {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UIGS_ImpactTypeObject> ObjectId;

    FIGS_ImpactDataID();
};
