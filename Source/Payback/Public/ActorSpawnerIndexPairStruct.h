#pragma once
#include "CoreMinimal.h"
#include "ActorSpawnerIndexPairStruct.generated.h"

class UIGS_PropActorSpawner;

USTRUCT()
struct FActorSpawnerIndexPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UIGS_PropActorSpawner* PropActorSpawner;
    
    UPROPERTY()
    int32 Index;
    
    PAYBACK_API FActorSpawnerIndexPairStruct();
};

