#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_OnKeypadEnded.h"
#include "IGS_OnKeypadLeft.h"
#include "IGS_KeypadMinigame.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UInputComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_KeypadMinigame : public AActor {
    GENERATED_BODY()
public:
    AIGS_KeypadMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WinKeypad();

public:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSuccess(bool inSuccess);

    UFUNCTION(BlueprintCallable)
    void SetKeypadCode(const FString& inCode);

    UFUNCTION(BlueprintCallable)
    void ResetKeypad();

    UFUNCTION()
    void ReportWrongCodeEntered(AIGS_PlayerCharacter* inInstigator) const;

public:
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnKeypadWin();

    UFUNCTION(BlueprintImplementableEvent)
    void OnKeypadRestart();

    UFUNCTION(BlueprintImplementableEvent)
    void OnKeypadLose();

    UFUNCTION()
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);

    UFUNCTION()
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);

    UFUNCTION(BlueprintImplementableEvent)
    void OnDisplayCodeChanged();

    UFUNCTION(BlueprintImplementableEvent)
    void OnDigitHovered(int32 inDigit);

    UFUNCTION(BlueprintImplementableEvent)
    void OnClientEscaped();

    UFUNCTION(BlueprintCallable)
    void LoseKeypad();

public:
    UFUNCTION(BlueprintCallable)
    void Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction);

protected:
    UFUNCTION(BlueprintCallable)
    void HoverDigit(int32 inDigit);

    UFUNCTION(BlueprintCallable)
    void Escape(bool bForceEscapeWithoutNotifying);

    UFUNCTION(BlueprintCallable)
    void EnterDigit(int32 inDigit);

    UFUNCTION(Client, Reliable)
    void Client_Escape();

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnKeypadEnded OnKeypadEnded;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnKeypadLeft OnKeypadLeft;

    UPROPERTY(BlueprintReadOnly)
    bool bEnteredAnyCombination;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWrongCodeAddsStrike;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CurrentCode;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SolutionCode;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AkComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ButtonPressAkAudioEvent;

    UPROPERTY()
    AIGS_PlayerCharacter* m_Instigator;

    UPROPERTY()
    AIGS_PlayerControllerRoot* m_InstigatorController;

    UPROPERTY(Instanced)
    UInputComponent* m_InstigatorInputComponent;

};
