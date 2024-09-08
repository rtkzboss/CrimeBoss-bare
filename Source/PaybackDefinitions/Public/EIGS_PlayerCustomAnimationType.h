#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCustomAnimationType.generated.h"

UENUM()
enum class EIGS_PlayerCustomAnimationType {
    PCA_PressButton,
    PCA_Hold,
    PCA_Push,
    PCA_Ziptie,
    PCA_Revive,
    PCA_PhonePickup,
    PCA_Buzzsaw,
    PCA_Default,
    PCA_Universal,
    PCA_Payload,
    PCA_FenceUnhinge,
    PCA_TakeWeapon,
};

