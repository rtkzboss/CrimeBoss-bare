#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "IGS_FightPathQueryFilter.generated.h"

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API UIGS_FightPathQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float EnemyIdealRange2;
    
    UPROPERTY(EditAnywhere)
    bool ComputeDistanceCost;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
public:
    UIGS_FightPathQueryFilter();

};

