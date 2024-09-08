#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "EntranceFinderQueryFilter.generated.h"

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API UEntranceFinderQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
public:
    UEntranceFinderQueryFilter();

};

