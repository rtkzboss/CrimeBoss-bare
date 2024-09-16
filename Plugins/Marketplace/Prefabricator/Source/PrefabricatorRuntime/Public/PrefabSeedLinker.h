#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabSeedLinker.generated.h"

class APrefabActor;
class UPrefabSeedLinkerComponent;

UCLASS()
class PREFABRICATORRUNTIME_API APrefabSeedLinker : public AActor {
    GENERATED_BODY()
public:
    APrefabSeedLinker(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<APrefabActor>> LinkedActors;

    UPROPERTY(Instanced)
    UPrefabSeedLinkerComponent* SeedLinkerComponent;

};
