#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_JobsScreenCategoryItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_JobsScreenCategoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> ButtonImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ButtonName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ButtonDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer MissionScenarios;
    
    CRIMEBOSSMETA_API FIGS_JobsScreenCategoryItem();
};

