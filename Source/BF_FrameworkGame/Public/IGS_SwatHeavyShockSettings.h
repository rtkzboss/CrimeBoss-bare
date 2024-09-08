#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SwatHeavyShockSettings.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_SwatHeavyShockSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ActivationDistance;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Angle;
    
    UPROPERTY(EditAnywhere)
    float ChargeTime;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Duration;
    
    FIGS_SwatHeavyShockSettings();
};

