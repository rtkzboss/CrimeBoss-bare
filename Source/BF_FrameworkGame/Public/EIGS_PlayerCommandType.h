#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerCommandType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlayerCommandType : uint8 {
    Command_SingleTap UMETA(DisplayName="Single Tap"),
    Command_Follow UMETA(DisplayName=Follow),
    Command_FollowAll UMETA(DisplayName="Follow All"),
    Command_HoldPosition UMETA(DisplayName="Hold Position"),
    Command_FireAtWill UMETA(DisplayName="Fire At Will"),
    Command_Disperse UMETA(DisplayName=Disperse),
    Command_Assign UMETA(DisplayName=Assign),
    Command_OrderPosition UMETA(DisplayName="Order Position"),
    Command_Attack UMETA(DisplayName=Attack),
    Command_Yes UMETA(DisplayName=Yes),
    Command_No UMETA(DisplayName=No),
    Command_Praise UMETA(DisplayName=Praise),
    Command_Reproach UMETA(DisplayName=Reproach),
    Command_Custom1 UMETA(DisplayName="Custom 1"),
    Command_Custom2 UMETA(DisplayName="Custom 2"),
    Command_NoticedEnemy UMETA(DisplayName="Noticed Enemy"),
    Command_DeliverLoot UMETA(DisplayName="Deliver Loot"),
    Command_DeliverLootAll UMETA(DisplayName="Deliver Loot All"),
};
