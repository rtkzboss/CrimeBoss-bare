#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "RoomFinderQueryFilter.generated.h"

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API URoomFinderQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    URoomFinderQueryFilter();

protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;

    UPROPERTY(EditAnywhere)
    bool IsActive;

};
