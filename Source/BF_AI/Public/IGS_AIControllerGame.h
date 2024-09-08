#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "IGS_AIControllerBase.h"
#include "IGS_AIControllerGame.generated.h"

class AIGS_NavHintGoal;
class UBehaviorTree;
class UEnvQuery;
class UIGS_AICommand;
class UIGS_AIDetectionComponent;
class UIGS_AIInitialSpawnDataComponent;
class UIGS_AISuspiciousnessComponentBase;
class UIGS_AreaOfOperationsComponent;
class UIGS_BehaviorTreeGameComponent;
class UIGS_BlackboardGameComponent;
class UIGS_NavLinkHandlerComponent;
class UIGS_ScriptingCommandAsyncBase;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_AIControllerGame : public AIGS_AIControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAvoidanceEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinCornerOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxCornerOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* DefaultBehaviourTree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* ShootBehaviourTree;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UEnvQuery* EscapeQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_AISuspiciousnessComponentBase* AISuspiciousnessComponentOptional;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_AIDetectionComponent* AIDetectionComponentOptional;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BlackboardGameComponent* BlackboardGameComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BehaviorTreeGameComponent* BehaviorTreeGameComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_AreaOfOperationsComponent* AreaOfOperationsComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UIGS_NavLinkHandlerComponent* NavLinkHandlerComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UIGS_AIInitialSpawnDataComponent* InitialSpawnDataComponent;
    
    UPROPERTY()
    UIGS_AICommand* m_AICommand;
    
    UPROPERTY()
    UIGS_AICommand* m_SOCommand;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UIGS_ScriptingCommandAsyncBase>> m_ActiveScriptingCommands;
    
private:
    UPROPERTY()
    FAIMoveRequest m_AsyncMoveRequest;
    
    UPROPERTY()
    AIGS_NavHintGoal* m_NavHelperGoal;
    
public:
    AIGS_AIControllerGame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetScriptingPostponed(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCornerOffset(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ReportReload(bool inIsCombat, bool isEmptyMagazine);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RandomizedReladAmmoUsed();
    
    UFUNCTION()
    void OnStartedPlayingMatch();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSOScopeValid();
    
    UFUNCTION(BlueprintPure)
    bool IsScriptingPosponed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReloadRequireAmmoUsed() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AISuspiciousnessComponentBase* GetOptionalAISuspiciousnessComponent() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AIDetectionComponent* GetOptionalAIDetectionComponent() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_NavLinkHandlerComponent* GetNavlinkHandlerComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetCornerOffsetMin() const;
    
    UFUNCTION(BlueprintPure)
    float GetCornerOffsetMax() const;
    
    UFUNCTION(BlueprintPure)
    float GetCombatRangePrefered() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAmmoUsedSinceLastReload() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceLeaveWaypoint();
    
};

