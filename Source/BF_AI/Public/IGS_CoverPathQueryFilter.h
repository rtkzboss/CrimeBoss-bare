#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "IGS_CoverPathQueryFilter.generated.h"

UCLASS(Abstract)
class BF_AI_API UIGS_CoverPathQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
public:
    UIGS_CoverPathQueryFilter();

};

