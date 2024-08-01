#pragma once
#include "CoreMinimal.h"
#include "IGS_SpawnerEventDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_OneParam(FIGS_SpawnerEventDelegate, const TArray<AIGS_GameCharacterFramework*>&, inSpawnedCharacters);