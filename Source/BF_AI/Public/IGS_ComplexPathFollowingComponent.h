#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Templates/SubclassOf.h"
#include "IGS_ComplexPathFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ComplexPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UIGS_ComplexPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ProjectPointToNavigation(const FVector& inPoint, TSubclassOf<UNavigationQueryFilter> inFilterClass, FVector inQueryExtent, FVector& inProjectedLocation) const;

    UFUNCTION(BlueprintCallable)
    void ForceStopTransition();

protected:
    UPROPERTY(EditAnywhere)
    bool bAcceptPartialPaths;

};
