#pragma once
#include "CoreMinimal.h"
#include "IGS_LinkedGraphDefinition.generated.h"

class UIGS_LinkedAnimInstance;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_LinkedGraphDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UIGS_LinkedAnimInstance> LinkedAnimInstance;
    
    UPROPERTY(EditAnywhere)
    FName GraphTag;
    
    FIGS_LinkedGraphDefinition();
};

