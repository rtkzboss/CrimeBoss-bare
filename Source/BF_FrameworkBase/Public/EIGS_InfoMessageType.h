#pragma once
#include "CoreMinimal.h"
#include "EIGS_InfoMessageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_InfoMessageType : uint8 {
    Info_Generic UMETA(DisplayName=Generic),
    Info_ItemAdded UMETA(DisplayName="Item Added"),
    Info_SuspicionAdded UMETA(DisplayName="Suspicion Added"),
    Info_PlayerDown UMETA(DisplayName="Player Down"),
    Info_PlayerDied UMETA(DisplayName="Player Died"),
    Info_PingWeapon UMETA(DisplayName="Ping Weapon"),
    Info_ControlRoom UMETA(DisplayName="Control Room"),
    Info_AmmoPickup UMETA(DisplayName="Ammo Pickup"),
    Info_TelephoneAlarm UMETA(DisplayName="Telephone Alarm"),
    Info_AlarmButton UMETA(DisplayName="Alarm Button"),
};
