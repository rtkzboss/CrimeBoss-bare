#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_PlotlineSelectionStarItem.h"
#include "IGS_PlotlineSelectionDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_PlotlineSelectionDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag itemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> BackgroundImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag UnlockCriteriaTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LockedMessage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_PlotlineSelectionStarItem> StarItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlotline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDebugOnly;
    
    FIGS_PlotlineSelectionDefinition();
};

