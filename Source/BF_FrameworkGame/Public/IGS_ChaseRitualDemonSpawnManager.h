#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChaseRitualDemonSpawnManager.generated.h"

class AIGS_AISpawnPointVIP;
class AIGS_GameCharacterFramework;
class UBillboardComponent;
class UEnvQuery;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ChaseRitualDemonSpawnManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> DemonSpawnClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_AISpawnPointVIP* DemonSpawnPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AIGS_AISpawnPointVIP> SpawnPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerTolarance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnDemonInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerInputCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChanceToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAllowedSpawnedDemons;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    int32 SpawnedDemons;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UEnvQuery* SpawnQueryTemplate;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    int32 CorrectRunesForActivation;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    int32 RunesActivated;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    int32 CorrectRunesActivated;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_SpawningAlreadyStarted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* PlayerCharacter;
    
public:
    AIGS_ChaseRitualDemonSpawnManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void TryToSpawnDemon();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
protected:
    UFUNCTION()
    void ResetPlayerInputDetection();
    
    UFUNCTION()
    void OnSquadSpawnedEvent(TArray<AIGS_GameCharacterFramework*> inSquadMembers);
    
    UFUNCTION(BlueprintCallable)
    void DemonVanished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void DemonVanish(AIGS_GameCharacterFramework* VanishingDemon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DemonSpawned(AIGS_GameCharacterFramework* SpawnedDemon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DemonLogicStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DemonLogicFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DemonDied();
    
};

