#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_RollAnimTable.generated.h"

class UAnimMontage;

USTRUCT()
struct BF_ANIMATIONS_API FIGS_RollAnimTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> AnimVariations;
    
    FIGS_RollAnimTable();
};

