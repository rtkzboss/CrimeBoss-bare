#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_InteractiveFollowComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractiveFollowComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsFollowing)
    bool IsFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerHoldTimeFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimerHoldTimeStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float followDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool CanBeUseInAlarm;
    
    UIGS_InteractiveFollowComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_IsFollowing();
    
};

