#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.generated.h"

UENUM(BlueprintType)
enum class EIGS_AlarmReason : uint8 {
    Alarm_UNKNOWN = 255 UMETA(DisplayName=UNKNOWN),
    Alarm_CalledByScript = 0 UMETA(DisplayName="Called By Script"),
    Alarm_GunshotsReported UMETA(DisplayName="Gunshots Reported"),
    Alarm_SuspiciousActivityReported UMETA(DisplayName="Suspicious Activity Reported"),
    Alarm_GuardRaisedAlarm UMETA(DisplayName="Guard Raised Alarm"),
    Alarm_SilentAlarmRaised UMETA(DisplayName="Silent Alarm Raised"),
    Alarm_MotionDetectorTriggered UMETA(DisplayName="Motion Detector Triggered"),
    Alarm_AlarmButton UMETA(DisplayName="Alarm Button"),
    Alarm_CalledByScriptNoDialogue UMETA(DisplayName="Called By Script No Dialogue"),
    Alarm_LastStrikeAdded UMETA(DisplayName="Last Strike Added"),
    Alarm_SusNoise UMETA(DisplayName="Sus Noise"),
};
