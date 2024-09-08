#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_LoadingScreenTipsRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_LoadingScreenTipsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> Tips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> ControllerTips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> KeyboardMouseTips;
    
    BF_LOADING_API FIGS_LoadingScreenTipsRow();
};

