#pragma once
#include "CoreMinimal.h"
#include "IGS_LightHitReactionsBodyVariants.h"
#include "IGS_LightHitReactionsVariant.generated.h"

USTRUCT(BlueprintType)
struct FIGS_LightHitReactionsVariant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsBodyVariants Front;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsBodyVariants Right;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsBodyVariants Back;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsBodyVariants Left;
    
    BF_ANIMATIONS_API FIGS_LightHitReactionsVariant();
};

