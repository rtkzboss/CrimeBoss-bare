#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactHitParameter.generated.h"

class UIGS_ImpactTypeObject;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactHitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseDefaultMaterial;
    
    FIGS_ImpactHitParameter();
};

