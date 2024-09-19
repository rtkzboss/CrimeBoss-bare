#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCustomAnimationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerCustomAnimationType : uint8 {
    PCA_PressButton UMETA(DisplayName="Press Button"),
    PCA_Hold UMETA(DisplayName=Hold),
    PCA_Push UMETA(DisplayName=Push),
    PCA_Ziptie UMETA(DisplayName=Ziptie),
    PCA_Revive UMETA(DisplayName=Revive),
    PCA_PhonePickup UMETA(DisplayName="Phone Pickup"),
    PCA_Buzzsaw UMETA(DisplayName=Buzzsaw),
    PCA_Default UMETA(DisplayName=Default),
    PCA_Universal UMETA(DisplayName=Universal),
    PCA_Payload UMETA(DisplayName=Payload),
    PCA_FenceUnhinge UMETA(DisplayName="Fence Unhinge"),
    PCA_TakeWeapon UMETA(DisplayName="Take Weapon"),
};
