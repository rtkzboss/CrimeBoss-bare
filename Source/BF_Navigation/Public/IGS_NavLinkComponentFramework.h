#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "OnMoveLeftLinkDelegate.h"
#include "OnMoveReachedLinkDelegate.h"
#include "IGS_NavLinkComponentFramework.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NAVIGATION_API UIGS_NavLinkComponentFramework : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMoveReachedLink OnMoveReachedLink;
    
    UPROPERTY(BlueprintAssignable)
    FOnMoveReachedLink OnTransitionStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMoveLeftLink OnMoveLeftLink;
    
    UIGS_NavLinkComponentFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMovingAgents() const;
    
};

