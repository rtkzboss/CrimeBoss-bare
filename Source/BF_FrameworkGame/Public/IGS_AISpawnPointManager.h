#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AISpawnPointManager.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_AISpawnPoint;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AISpawnPointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AISpawnPointManager();

    UFUNCTION(BlueprintPure)
    TArray<AIGS_AISpawnPoint*> GetAllSpawnPointsInBox(FVector inOrigin, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_AISpawnPoint*> GetAllSpawnPoints() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_AIEnemyGroupSpawner*> GetAllSpawnGroupsInBox(FVector inOrigin, FVector InBoxExtent) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_AIEnemyGroupSpawner*> GetAllSpawnGroups() const;
    
};

