#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIPointManager.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_AITransitionObjectBase;
class AIGS_ProgressGadgetBase;
class AIGS_WaypointFramework;
class UActorComponent;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIPointManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AIGS_WaypointFramework*> m_SniperPoints;
    
    UPROPERTY()
    TArray<AIGS_WaypointFramework*> m_BotLimboIdlePoints;
    
    UPROPERTY()
    TArray<AIGS_WaypointFramework*> m_BotLimboJumpPoints;
    
    UPROPERTY()
    TArray<AIGS_ProgressGadgetBase*> m_DisruptibleGadgets;
    
    UPROPERTY(Instanced)
    TArray<UActorComponent*> m_ThrowBagComponents;
    
    UPROPERTY()
    TArray<AIGS_AITransitionObjectBase*> m_MonsterClosets;
    
    UPROPERTY()
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawners;
    
    UPROPERTY()
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawnersFriendlies;
    
    UPROPERTY()
    TArray<AIGS_AIEnemyGroupSpawner*> m_WarzoneSpawnersCaptain;
    
public:
    UIGS_AIPointManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBotLimboJumpPoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBotLimboIdlePoint(AIGS_WaypointFramework* inWaypoint);
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> GetThrowBagComponents() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_ProgressGadgetBase*> GetDisruptibleGadgets() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointFramework*> GetBotLimboJumpPoints() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_WaypointFramework*> GetBotLimboIdlePoints() const;
    
};

