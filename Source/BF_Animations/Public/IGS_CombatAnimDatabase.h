#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_CombatAnimDatabase.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_CombatAnimDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> AnimVariations;
    
    UPROPERTY(EditAnywhere)
    bool isLooped;
    
    BF_ANIMATIONS_API FIGS_CombatAnimDatabase();
};

