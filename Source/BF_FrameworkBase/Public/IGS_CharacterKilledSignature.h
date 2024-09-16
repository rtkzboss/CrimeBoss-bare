#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_CharacterKilledSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_CharacterKilledSignature, AIGS_GameCharacterFramework*, inInstigator, const FHitResult&, inHitResult);
