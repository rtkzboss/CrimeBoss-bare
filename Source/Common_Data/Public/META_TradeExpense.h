#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeExpenseType.h"
#include "META_TradeExpense.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TradeExpense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMETA_TradeExpenseType ExpenseType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag LootCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EconomyVariable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag GraphVariable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Alternative;
    
    FMETA_TradeExpense();
};

