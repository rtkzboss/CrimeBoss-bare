#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaMissionNames.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_MetaMissionNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Story;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> MoneyMaking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> TurfWar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Character;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Other;
    
    FIGS_MetaMissionNames();
};

