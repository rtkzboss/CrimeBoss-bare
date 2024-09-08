#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IGS_GadgetAnimInstance.generated.h"

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_GadgetAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_GadgetAnimInstance();

    UFUNCTION(BlueprintCallable)
    void OnDrillUnJammed();
    
    UFUNCTION(BlueprintCallable)
    void OnDrillStarted(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void OnDrillSpeedUp(bool IsSpeedUp, float inMaxSpeedUp);
    
    UFUNCTION(BlueprintCallable)
    void OnDrillJammed();
    
    UFUNCTION(BlueprintCallable)
    void OnDrillEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drill_UnJammed_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drill_Started_Event(float InTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drill_SpeedUp_Event(bool IsSpeedUp, float inMaxSpeedUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drill_Jammed_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Drill_Ended_Event();
    
};

