#pragma once
#include "CoreMinimal.h"
#include "SpecificCharacterPortraitReadyOutputPin.generated.h"

class UTexture2D;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecificCharacterPortraitReadyOutputPin, UTexture2D*, inCharacterPortrait);
