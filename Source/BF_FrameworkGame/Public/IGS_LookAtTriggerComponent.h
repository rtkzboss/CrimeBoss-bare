#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_CustomCanTriggerSignatureDelegate.h"
#include "IGS_OnClientTriggerSignatureDelegate.h"
#include "IGS_OnServerTriggerSignatureDelegate.h"
#include "IGS_LookAtTriggerComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LookAtTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnServerTriggerSignature OnServerTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnClientTriggerSignature OnClientTriggered;
    
    UPROPERTY(BlueprintReadWrite)
    FIGS_CustomCanTriggerSignature CustomCanTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyFrontFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(Replicated)
    bool mR_bIsEnabledRuntime;
    
    UPROPERTY(Replicated)
    bool mR_bIsTriggered;
    
public:
    UIGS_LookAtTriggerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inEnabled);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Server_Trigger(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Server_CanTrigger(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTrigger();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Client_Trigger(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Client_CanTrigger(AIGS_GameCharacterFramework* inInstigator);
    
};

