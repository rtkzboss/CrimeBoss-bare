#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_CharactersTeamSidesHolder.h"
#include "IGS_GeneralListenerRegisteredDelegate.h"
#include "IGS_OnCharacterDiedDynamicSignatureDelegate.h"
#include "IGS_OnCharacterRegisteredDynamicSignatureDelegate.h"
#include "IGS_OnCharacterUnregisteredDynamicSignatureDelegate.h"
#include "IGS_AIDirector.generated.h"

class AActor;
class AIGS_ControlRoomBase;
class AIGS_GameCharacterFramework;
class UIGS_AIDifficultyManager;
class UIGS_AIEventsDispatcher;
class UIGS_AIPointManager;
class UIGS_AISpawner;
class UIGS_AmbientLifeManager;
class UIGS_DefendManager;
class UIGS_DetectionManager;
class UIGS_GuardControlRoomComponentBase;
class UIGS_MountedWeaponManager;
class UIGS_PressureManager;
class UIGS_TrafficManager;
class UIGS_WaveManager;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIDirector : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterRegisteredDynamicSignature OnCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterUnregisteredDynamicSignature OnCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterDiedDynamicSignature OnCharacterDiedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterRegisteredDynamicSignature OnPlayerCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterUnregisteredDynamicSignature OnPlayerCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterRegisteredDynamicSignature OnHeisterCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterUnregisteredDynamicSignature OnHeisterCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterRegisteredDynamicSignature OnBotCharacterRegisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterUnregisteredDynamicSignature OnBotCharacterUnregisteredEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GeneralListenerRegistered OnGeneralListenerRegistered;
    
private:
    UPROPERTY(Instanced)
    UIGS_WaveManager* m_WaveManager;
    
    UPROPERTY()
    UIGS_AISpawner* m_AISpawner;
    
    UPROPERTY()
    UIGS_PressureManager* m_PressureManager;
    
    UPROPERTY()
    UIGS_AIEventsDispatcher* m_AIEventsDispatcher;
    
    UPROPERTY()
    UIGS_AmbientLifeManager* m_AmbientLifeManager;
    
    UPROPERTY()
    UIGS_DefendManager* m_DefendManager;
    
    UPROPERTY()
    UIGS_DetectionManager* m_DetectionManager;
    
    UPROPERTY()
    UIGS_MountedWeaponManager* m_MountedWeaponManager;
    
    UPROPERTY()
    UIGS_AIPointManager* m_AIPointsManager;
    
    UPROPERTY()
    UIGS_TrafficManager* m_TrafficManager;
    
    UPROPERTY()
    UIGS_AIDifficultyManager* m_AIDifficultyManager;
    
    UPROPERTY()
    AActor* m_GeneralListener;
    
    UPROPERTY(Transient)
    TMap<EIGS_TeamSideEnum, FIGS_CharactersTeamSidesHolder> m_TeamSideCharacters;
    
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> m_AllCharacters;
    
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> m_AllPlayers;
    
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> m_AllBots;
    
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> m_AllHeisters;
    
    UPROPERTY(Transient)
    TMap<int32, AIGS_ControlRoomBase*> m_AllControlRooms;
    
    UPROPERTY(Instanced, Transient)
    TMap<int32, UIGS_GuardControlRoomComponentBase*> m_AllControlRoomComponents;
    
    UPROPERTY(Transient)
    TMap<AActor*, float> m_GlobalAggros;
    
    UPROPERTY(Transient)
    TMap<AActor*, FTimerHandle> m_ActorsPendingAggroRemoval;
    
    UPROPERTY(Transient)
    bool MatchStartedForAI;
    
public:
    UIGS_AIDirector();

    UFUNCTION(BlueprintCallable)
    void SetGlobalAggro(AActor* inActor, float InFloat, const AActor* inInstigator);
    
    UFUNCTION()
    void RemoveGlobalAggroEntry(AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    UIGS_WaveManager* GetWaveManager();
    
    UFUNCTION(BlueprintPure)
    UIGS_TrafficManager* GetTrafficManager() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_PressureManager* GetPressureManager() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_MountedWeaponManager* GetMountedWeaponManager() const;
    
    UFUNCTION(BlueprintPure)
    float GetGlobalAggro(const AActor* inActor, const AActor* inInstigator) const;
    
    UFUNCTION(BlueprintPure)
    UIGS_DetectionManager* GetDetectionManager() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_DefendManager* GetDefendManager() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_ControlRoomBase* GetControlRoomForSquad(int32 inSquadID);
    
    UFUNCTION(BlueprintPure)
    UIGS_GuardControlRoomComponentBase* GetControlRoomComponentForSquad(int32 inSquadID);
    
    UFUNCTION(BlueprintPure)
    UIGS_AmbientLifeManager* GetAmbientLifeManager() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AISpawner* GetAISpawner() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AIPointManager* GetAIPointsManager() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AIEventsDispatcher* GetAIEventsDispatcher() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AIDifficultyManager* GetAIDifficultyManager() const;
    
};

