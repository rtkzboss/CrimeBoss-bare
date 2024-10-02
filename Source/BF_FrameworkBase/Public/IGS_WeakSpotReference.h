#pragma once
#include "CoreMinimal.h"
#include "IGS_WeakSpotReference.generated.h"

class UIGS_ObjectStatus;
class UPrimitiveComponent;

USTRUCT()
struct BF_FRAMEWORKBASE_API FIGS_WeakSpotReference {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> WeakSpotComponent;

    UPROPERTY(Instanced)
    UIGS_ObjectStatus* WeakSpotObjectStatus;

    UPROPERTY()
    float AIDamageMultiplier;

    UPROPERTY()
    bool Enabled;

    FIGS_WeakSpotReference();
};
