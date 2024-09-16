#pragma once
#include "CoreMinimal.h"
#include "EIGS_PropSpawnerBudgetSize.h"
#include "PropBudgetIntervalStruct.h"
#include "PropSpawnerBudgetStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropSpawnerBudgetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 CurrentBudget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_PropSpawnerBudgetSize PropSpawnerBudgetSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropBudgetIntervalStruct SmallBudget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropBudgetIntervalStruct MediumBudget;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropBudgetIntervalStruct LargeBudget;

    UPROPERTY(EditDefaultsOnly)
    uint8 MaxSpawnsPerSameProp;

    UPROPERTY(EditDefaultsOnly)
    uint8 MaxRerollsIfRedundant;

    PAYBACK_API FPropSpawnerBudgetStruct();
};
