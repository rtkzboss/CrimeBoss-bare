#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "IGS_MissionResultRewardItem.h"
#include "GameplayTagContainer.h"
#include "IGS_Screen.h"
#include "IGS_DebriefAnimationSequenceData.h"
#include "IGS_DebriefScreenEvent.h"
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
    void SetMissionResult(const FIGS_MissionResult& inMissionResult, const TArray<FIGS_MissionResultRewardItem>& inMissionRewards);

    UFUNCTION(BlueprintCallable)
    void SetIsSkipped(bool inIsSkipped);

private:
    UFUNCTION()
    void PlayNextAnimation();

public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDebriefBP();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipped();

    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationFinishedBP();

    UFUNCTION(BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetXpRewards() const;

    UFUNCTION(BlueprintCallable)
    TArray<FIGS_DebriefAnimationSequenceData> GetRewardUISequenceData(UPARAM(Ref) TArray<FIGS_MissionResultRewardItem>& inRewardItems);

    UFUNCTION(BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetMoneyRewards() const;

    UFUNCTION(BlueprintPure)
    TArray<FIGS_MissionResultRewardItem> GetMissionRewards() const;

    UFUNCTION(BlueprintPure)
    FIGS_MissionResult GetMissionResult() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetCameraTag() const;

    UFUNCTION(BlueprintPure)
    int32 GetAdditionalMissionDataByTag(FGameplayTag inTag) const;

    UFUNCTION(BlueprintCallable)
    void AddAnimation(UIGS_AnimatedWidget* inAnimatedWidget, UObject* inPayloadData);

    UPROPERTY(BlueprintReadOnly)
    bool IsSkipped;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_DebriefScreenEvent OnContinueEvent;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CameraTag;

private:
    UPROPERTY(Instanced)
    TArray<UIGS_AnimatedWidget*> m_AnimationQueue;

    UPROPERTY(Instanced)
    UIGS_AnimatedWidget* m_CurrentAnimatedWidget;

};
