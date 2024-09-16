#pragma once
#include "CoreMinimal.h"
#include "CharacterPortraitReadyOutputPin.generated.h"

class UTexture2D;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterPortraitReadyOutputPin, UTexture2D*, inCharacterPortrait);
