#pragma once
#include "CoreMinimal.h"
#include "IGS_AlarmDeviceBase.h"
#include "IGS_TelephoneBase.generated.h"

class AIGS_ControlRoomBase;
class AIGS_GameCharacterFramework;
class UIGS_StealthSettingsInstance;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_TelephoneBase : public AIGS_AlarmDeviceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRinging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPublicTelephone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_ControlRoomBase* ControlRoom;
    
protected:
    UPROPERTY()
    UIGS_StealthSettingsInstance* m_StealthSettingsInstance;
    
public:
    AIGS_TelephoneBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerAlarm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTelephoneRingEnded(bool inAnswered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTelephoneRing();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginCheckInCall();
    
    UFUNCTION(BlueprintCallable)
    void AnswerCall(AIGS_GameCharacterFramework* inInstigator);
    
};

