#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponentsHolder.generated.h"

class UIGS_InteractiveComponent;

USTRUCT()
struct FIGS_InteractiveComponentsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UIGS_InteractiveComponent> InteractiveComponent;

    UPROPERTY()
    float Progress;

    PAYBACK_API FIGS_InteractiveComponentsHolder();
};
