#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_LockPickDifficultySetting.h"
#include "IGS_OnLockpickEndedDelegate.h"
#include "IGS_LockpickMinigame.generated.h"

class AIGS_PlayerCharacter;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UInputComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LockpickMinigame : public AActor {
    GENERATED_BODY()
public:
    AIGS_LockpickMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuccessOnePick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSuccess(bool inSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStaggered(bool inStaggered);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPins();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVeryCloseChanged(bool inVeryClose);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStaggeredChanged(bool inStaggered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlightlyCloseChanged(bool inSlightlyClose);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPinsReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOnePinSuccess();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockpickWin();
    
protected:
    UFUNCTION()
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);
    
    UFUNCTION()
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction);
    
    UFUNCTION(BlueprintNativeEvent)
    float HandleMouseInput(FVector2D inXY);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Escape(bool bForceEscapeWithoutNotifying);
    
    UFUNCTION(Client, Reliable)
    void Client_Escape();
    
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnLockpickEnded OnLockpickEndedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_LockPickDifficultySetting LockpickSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ButtonPressAkAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentPinCount;
    
    UPROPERTY(Instanced)
    UInputComponent* m_InstigatorInputComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D AnalogMousePos;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Angle;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<float> CorrectAngles;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSlightlyClose;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bVeryClose;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bStaggered;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ClampRadiusPercentage;
    
};

