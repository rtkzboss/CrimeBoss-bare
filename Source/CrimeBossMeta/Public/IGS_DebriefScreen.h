#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_DebriefBonus.h"
#include "IGS_DebriefScreen.generated.h"

class UIGS_AnimatedWidget;
class UObject;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_DebriefScreen : public UIGS_Screen {
    GENERATED_BODY()
public:
    UIGS_DebriefScreen();

    UFUNCTION(BlueprintCallable)
    void StartAnimatedDebrief();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionResult(UPARAM(Ref) FIGS_MissionResult& inMissionResult);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSkipped(bool inIsSkipped);
    
    UFUNCTION(BlueprintCallable)
    void SetDebriefBonuses(TArray<FIGS_DebriefBonus> inBonuses);
    
private:
    UFUNCTION()
    void PlayNextAnimation();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationFinishedBP();
    
    UFUNCTION(BlueprintPure)
    bool HasSomeDebriefBonuses() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_MissionResult GetMissionResult() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FIGS_DebriefBonus GetDebriefBonusByTag(FGameplayTag inTag, bool& outSuccess) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData);
    
    UPROPERTY(BlueprintReadOnly)
    bool IsSkipped;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FIGS_DebriefBonus> DebriefBonuses;
    
private:
    UPROPERTY(Instanced)
    TArray<UIGS_AnimatedWidget*> m_AnimationQueue;
    
    UPROPERTY(Instanced)
    UIGS_AnimatedWidget* m_CurrentAnimatedWidget;
    
};

