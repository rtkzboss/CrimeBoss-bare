#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_PaybackVoiceoverSubsystem.generated.h"

class AIGS_GlobalDialoguePlayer;

UCLASS()
class PAYBACK_API UIGS_PaybackVoiceoverSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_PaybackVoiceoverSubsystem();

protected:
    UPROPERTY()
    AIGS_GlobalDialoguePlayer* GlobalDialoguePlayer;

};
