#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IGS_CharacterDealtDamageSignature.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FIGS_CharacterDealtDamageSignature, AIGS_GameCharacterFramework*, inInstigator, const FHitResult&, inHitResult, bool, inIsKillShot, bool, inIsHeadshot, bool, inIsDead);
