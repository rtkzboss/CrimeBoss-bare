#pragma once
#include "CoreMinimal.h"
#include "MeshSpawnerIndexPairStruct.generated.h"

class UIGS_PropMeshSpawner;

USTRUCT()
struct FMeshSpawnerIndexPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UIGS_PropMeshSpawner* PropMeshSpawner;

    UPROPERTY()
    int32 Index;

    PAYBACK_API FMeshSpawnerIndexPairStruct();
};
