#pragma once
#include "CoreMinimal.h"
#include "PrefabActor.h"
#include "ReplicablePrefabActor.generated.h"

UCLASS(Config=Inherit)
class PREFABRICATORRUNTIME_API AReplicablePrefabActor : public APrefabActor {
    GENERATED_BODY()
public:
    AReplicablePrefabActor(const FObjectInitializer& ObjectInitializer);

};

