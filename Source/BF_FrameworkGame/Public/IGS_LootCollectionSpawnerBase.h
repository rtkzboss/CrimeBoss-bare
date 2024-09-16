#pragma once
#include "CoreMinimal.h"
#include "IGS_LootSpawnedSignature.h"
#include "IGS_SpawnerBase.h"
#include "IGS_LootCollectionSpawnerBase.generated.h"

class AActor;
class AIGS_LootCollectionBase;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LootCollectionSpawnerBase : public AIGS_SpawnerBase {
    GENERATED_BODY()
public:
    AIGS_LootCollectionSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LootCollectionSpawned(AIGS_LootCollectionBase* inLootCollection);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USceneComponent* Scene;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* SpawnPlaceholder;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* SpawnedActor;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftClassPtr<AActor> ActorToSpawn;

    UPROPERTY(BlueprintAssignable)
    FIGS_LootSpawnedSignature OnLootCollectionSpawned;

};
