#pragma once
#include "CoreMinimal.h"
#include "IGS_AlarmDeviceBase.h"
#include "IGS_AlarmButtonBase.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_AlarmButtonBase : public AIGS_AlarmDeviceBase {
    GENERATED_BODY()
public:
    AIGS_AlarmButtonBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void TriggerAlarm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnButtonPressed(bool bAlarmSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAlarmButton();
    
};

