#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_Keypad.generated.h"

class AIGS_PlayerCharacter;
class APawn;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class USpotLightComponent;
class UTextRenderComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_Keypad : public AActor {
    GENERATED_BODY()
public:
    AIGS_Keypad(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void SetButtonHighlightAfterDelay(int32 inButtonId);
    
    UFUNCTION(Reliable, Server)
    void Server_ProcessButtonLetter(const FString& inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ProcessClick();
    
    UFUNCTION(BlueprintCallable)
    void OnKeypadUsed(APawn* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKeypadEscape();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKeycodePass();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKeycodeFail();
    
    UFUNCTION()
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);
    
    UFUNCTION()
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable)
    void KeyboardKeyPressed(const FString& inKey);
    
    UFUNCTION(Client, Reliable)
    void Client_OnKeypadUsed(AIGS_PlayerCharacter* inPlayerCharacter);
    
    UFUNCTION(Client, Reliable)
    void Client_Escape();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SetLightStatus(bool InVisibility, bool inFailed) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void All_SetCodeTextRender(const FText& inCodeText);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_OnKeycodeCheckResult(bool inPassed);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_OnButtonPressed(int32 inButtonId);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_OnButtonHighlightOff(int32 inButtonId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KeypadCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* KeycodePassAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* KeycodeFailAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ButtonPressAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USpotLightComponent* GreenLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USpotLightComponent* RedLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextRenderComponent* CodeTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UTextRenderComponent*> ButtonsTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ButtonHighlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToClearAfterFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximalCodeLength;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool mR_IsInUse;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

