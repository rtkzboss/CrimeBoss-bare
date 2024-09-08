#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "IGS_DangerAvoidanceNavigationQueryFilter.generated.h"

UCLASS(Abstract)
class BF_AI_API UIGS_DangerAvoidanceNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float RadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float HeuristicScale;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
public:
    UIGS_DangerAvoidanceNavigationQueryFilter();

};

