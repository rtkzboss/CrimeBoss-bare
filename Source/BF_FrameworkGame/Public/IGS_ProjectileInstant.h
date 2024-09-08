#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileBase.h"
#include "IGS_ProjectileInstant.generated.h"

class UNiagaraSystem;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ProjectileInstant : public AIGS_ProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* TracerEffectNiagara;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* TracerEffectNiagaraFPV;
    
    UPROPERTY(EditAnywhere)
    float TracerEffectNiagaraChance;
    
    UPROPERTY(EditAnywhere)
    float TracerEffectNiagaraChanceFPV;
    
    AIGS_ProjectileInstant(const FObjectInitializer& ObjectInitializer);

};

