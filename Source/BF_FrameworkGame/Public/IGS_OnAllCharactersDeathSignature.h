#pragma once
#include "CoreMinimal.h"
#include "IGS_OnAllCharactersDeathSignature.generated.h"

class AIGS_AIEnemyGroupSpawner;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnAllCharactersDeathSignature, AIGS_AIEnemyGroupSpawner*, inSpawnGroup);
