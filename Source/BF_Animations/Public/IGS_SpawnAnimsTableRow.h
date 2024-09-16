#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_SpawnAnimsTableRow.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIGS_SpawnAnimsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> AnimVariations;

    BF_ANIMATIONS_API FIGS_SpawnAnimsTableRow();
};
