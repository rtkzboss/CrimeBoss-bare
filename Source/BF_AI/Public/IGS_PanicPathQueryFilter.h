#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "IGS_PanicPathQueryFilter.generated.h"

UCLASS(Abstract)
class BF_AI_API UIGS_PanicPathQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UIGS_PanicPathQueryFilter();

protected:
    UPROPERTY(EditAnywhere)
    float InnerRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float OuterRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DangerAreaCost;
    
    UPROPERTY(EditAnywhere)
    float HeuristicScale;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
};

