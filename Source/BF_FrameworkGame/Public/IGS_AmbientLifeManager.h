#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AmbientLifeManager.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_WaypointFramework;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AmbientLifeManager : public UObject {
    GENERATED_BODY()
public:
    UIGS_AmbientLifeManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterRemoverSpecialObjective(AIGS_WaypointFramework* inSpecialObjective);
    
    UFUNCTION(BlueprintCallable)
    void SpawnOne();
    
    UFUNCTION(BlueprintCallable)
    void RegisterRemoverSpecialObjective(AIGS_WaypointFramework* inSpecialObjective);
    
protected:
    UPROPERTY()
    TArray<AIGS_AIEnemyGroupSpawner*> m_SpawnGroups;
    
};

