#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_WeakSpotObjectStatusHealthChangedEventSignatureDelegate.h"
#include "IGS_WeakSpotSignatureDelegate.h"
#include "IGS_WeakSpotComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_WeakSpotComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_WeakSpotSignature OnWeakSpotCompromisedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WeakSpotObjectStatusHealthChangedEventSignature OnWeakSpotHealthChangedEvent;
    
    UIGS_WeakSpotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetWeakSpotEnabled(const UPrimitiveComponent* inWeakSpotReference, const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadIsWeakSpot(const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnabled(const bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool AddWeakSpot(const UPrimitiveComponent* inWeakSpotReference, const float inHealth, const bool inEnableAutomatically, const float inAIDamageMultiplier);
    
};

