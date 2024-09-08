#pragma once
#include "CoreMinimal.h"
#include "IGS_LightHitReactionsBodyVariants.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_LightHitReactionsBodyVariants {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> UpperBody;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> LowerBody;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> head;
    
    BF_ANIMATIONS_API FIGS_LightHitReactionsBodyVariants();
};

