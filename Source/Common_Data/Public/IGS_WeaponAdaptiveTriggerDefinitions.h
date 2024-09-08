#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseFeedbackMode.h"
#include "IGS_DualSenseVibrationMode.h"
#include "IGS_DualSenseWeaponMode.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAdaptiveTriggerDefinitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DualSenseFeedbackMode FeedbackMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DualSenseWeaponMode WeaponMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DualSenseVibrationMode VibrationMode;
    
    FIGS_WeaponAdaptiveTriggerDefinitions();
};

