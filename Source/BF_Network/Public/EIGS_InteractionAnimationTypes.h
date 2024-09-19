#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionAnimationTypes.generated.h"

UENUM(BlueprintType)
enum class EIGS_InteractionAnimationTypes : uint8 {
    EIGS_DoorOpened UMETA(DisplayName="Door Opened"),
    EIGS_DoorClosed UMETA(DisplayName="Door Closed"),
    EIGS_Pickup UMETA(DisplayName=Pickup),
    EIGS_ThrowLoot UMETA(DisplayName="Throw Loot"),
    EIGS_Ziptie UMETA(DisplayName=Ziptie),
    EIGS_CarryableThrowLow UMETA(DisplayName="Carryable Throw Low"),
    EIGS_CarryableThrow UMETA(DisplayName="Carryable Throw"),
    EIGS_LootBagPickup UMETA(DisplayName="Loot Bag Pickup"),
    EIGS_LootCollectionStart UMETA(DisplayName="Loot Collection Start"),
    EIGS_LootCollectionEnd UMETA(DisplayName="Loot Collection End"),
    EIGS_Undefined UMETA(DisplayName=Undefined),
};
