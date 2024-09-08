#pragma once
#include "CoreMinimal.h"
#include "IGS_PropMeshBase.h"
#include "IGS_PropMeshSpawner.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropMeshSpawner : public UIGS_PropMeshBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UStaticMesh* m_SpawnedMesh;
    
public:
    UIGS_PropMeshSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Despawn();
    
};

