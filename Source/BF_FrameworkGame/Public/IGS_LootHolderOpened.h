#pragma once
#include "CoreMinimal.h"
#include "IGS_LootHolderOpened.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootHolderOpened, AActor*, Instigator);
