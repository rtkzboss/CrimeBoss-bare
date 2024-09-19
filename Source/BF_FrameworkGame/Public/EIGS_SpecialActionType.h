#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialActionType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpecialActionType : uint8 {
    SAT_None UMETA(DisplayName=None),
    SAT_Ping UMETA(DisplayName=Ping),
    SAT_Shout UMETA(DisplayName=Shout),
    SAT_ShoutForHelp UMETA(DisplayName="Shout For Help"),
    SAT_Follow UMETA(DisplayName=Follow),
    SAT_Stop UMETA(DisplayName=Stop),
    SAT_Ziptying UMETA(DisplayName=Ziptying),
    SAT_LootBagPickup UMETA(DisplayName="Loot Bag Pickup"),
    SAT_Subdue UMETA(DisplayName=Subdue),
};
