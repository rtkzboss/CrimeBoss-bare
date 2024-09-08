#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AlarmDeviceManager.generated.h"

class AIGS_AlarmButtonBase;
class AIGS_TelephoneBase;
class AIGS_WalkieTalkie;
class UIGS_AlarmDeviceManager;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AlarmDeviceManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_AlarmButtonBase*> AlarmButtons;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_TelephoneBase*> Telephones;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_TelephoneBase*> ControlRoomTelephones;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_WalkieTalkie*> WalkieTalkies;
    
    UIGS_AlarmDeviceManager();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_AlarmDeviceManager* Instance(const UObject* inWorldContextObject);
    
};

