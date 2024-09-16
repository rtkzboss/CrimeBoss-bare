#pragma once
#include "CoreMinimal.h"
#include "IGS_PostProcessEffect.generated.h"

class IBlendableInterface;
class UBlendableInterface;

USTRUCT()
struct FIGS_PostProcessEffect {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TScriptInterface<IBlendableInterface> PostProcessMaterial;

    BF_RENDERING_API FIGS_PostProcessEffect();
};
