#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmDeviceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AlarmDeviceType : uint8 {
    AD_Unknown = 255 UMETA(DisplayName=Unknown),
    AD_WalkieTalkie = 0 UMETA(DisplayName="Walkie Talkie"),
    AD_AlarmButton UMETA(DisplayName="Alarm Button"),
    AD_Telephone UMETA(DisplayName=Telephone),
};
