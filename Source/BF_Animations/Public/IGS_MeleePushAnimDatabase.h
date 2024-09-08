#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_MeleePushAnimDatabase.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_MeleePushAnimDatabase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> AnimVariations;
    
    BF_ANIMATIONS_API FIGS_MeleePushAnimDatabase();
};

