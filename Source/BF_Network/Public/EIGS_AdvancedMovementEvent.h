#pragma once
#include "CoreMinimal.h"
#include "EIGS_AdvancedMovementEvent.generated.h"

UENUM(BlueprintType)
enum class EIGS_AdvancedMovementEvent : uint8 {
    AME_Slide UMETA(DisplayName=Slide),
    AME_StopSlide UMETA(DisplayName="Stop Slide"),
    AME_StopSlideOnZipline UMETA(DisplayName="Stop Slide On Zipline"),
    AME_LeaveLadder UMETA(DisplayName="Leave Ladder"),
    AME_LeaveLadderTop UMETA(DisplayName="Leave Ladder Top"),
    AME_LeaveLadderJump UMETA(DisplayName="Leave Ladder Jump"),
    AME_LeaveRappel UMETA(DisplayName="Leave Rappel"),
    AME_LeaveRappelFinished UMETA(DisplayName="Leave Rappel Finished"),
    AME_LeaveCoopClimbHelpMode UMETA(DisplayName="Leave Coop Climb Help Mode"),
};
