#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableLootSpawnedSignature.h"
#include "IGS_SpawnerBase.h"
#include "IGS_LootCarryableSpawnerBase.generated.h"

class AActor;
class AIGS_StaticMeshInventoryItemPickup;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LootCarryableSpawnerBase : public AIGS_SpawnerBase {
    GENERATED_BODY()
public:
    AIGS_LootCarryableSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LootCarryableSpawned(AIGS_StaticMeshInventoryItemPickup* inPickup);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* Scene;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* SpawnPlaceholder;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* SpawnedActor;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftClassPtr<AActor> ActorToSpawn;

    UPROPERTY(BlueprintAssignable)
    FIGS_CarryableLootSpawnedSignature OnCarryableLootCollectionSpawned;

};
