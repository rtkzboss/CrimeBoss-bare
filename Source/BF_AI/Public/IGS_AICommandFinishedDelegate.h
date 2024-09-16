#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommandFinishedDelegate.generated.h"

class AIGS_AIControllerGame;
class UIGS_AICommand;

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FIGS_AICommandFinishedDelegate, AIGS_AIControllerGame*, inOwningContoller, UIGS_AICommand*, inCommand, bool, inFailed);
