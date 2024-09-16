#pragma once
#include "CoreMinimal.h"
#include "IGS_WeakSpotReference.generated.h"

class UIGS_ObjectStatus;

USTRUCT()
struct BF_FRAMEWORKBASE_API FIGS_WeakSpotReference {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UIGS_ObjectStatus* WeakSpotObjectStatus;

    FIGS_WeakSpotReference();
};
