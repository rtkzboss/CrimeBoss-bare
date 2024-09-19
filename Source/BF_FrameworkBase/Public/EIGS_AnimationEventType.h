#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationEventType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AnimationEventType : uint8 {
    Event_Unknown = 255 UMETA(DisplayName=Unknown),
    Event_Default = 0 UMETA(DisplayName=Default),
    Event_InAnim UMETA(DisplayName="In Anim"),
    Event_LoopAnim UMETA(DisplayName="Loop Anim"),
    Event_OutAnim UMETA(DisplayName="Out Anim"),
    Event_BreakAnim UMETA(DisplayName="Break Anim"),
};
