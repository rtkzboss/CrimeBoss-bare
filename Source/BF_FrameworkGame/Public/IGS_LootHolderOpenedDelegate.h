#pragma once
#include "CoreMinimal.h"
#include "IGS_LootHolderOpenedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_LootHolderOpened, AActor*, Instigator);

