#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "Engine/NavigationObjectBase.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_OnCharacterDeathSignatureDelegate.h"
#include "IGS_OnCharacterSpawnedSignatureDelegate.h"
#include "IGS_OnCharactersSpawnedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISpawnPoint.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_GameCharacterBase;
class AIGS_WaypointFramework;
class UIGS_SettingsID;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_AISpawnPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterDeathSignature OnCharacterDeath;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharactersSpawnedSignature OnCharactersSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterSpawnedSignature OnSpawnTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_TeamUnitVariationHolder TeamUnitVariationHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutomaticStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutomaticStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRandomStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScenarioDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSideOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_WaypointFramework* GoTo;
    
    UPROPERTY()
    uint8 GoToScope;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 DefaultGoToScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideGoToScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 OverridenGoToScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Teleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_Speed GoToSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool GoToCrouch;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EIGS_SpawnAnimType SpawnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SpawnAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer InitialSpawnTags;
    
    UPROPERTY()
    bool SpawnAsDead_DEPRECATED;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PostponeAILogicAfterStartedPlayingMatch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 SquadID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float LastUsedTimestamp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool CanBeSeen;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SpawnTestPawn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName AISpawnPointTag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_AIEnemyGroupSpawner> OwnerGroupSpawner;
    
    AIGS_AISpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnUnitParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization);
    
    UFUNCTION(BlueprintCallable)
    void SpawnUnit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnTriggeredEvent(AIGS_GameCharacterBase* inUnit);
    
};

