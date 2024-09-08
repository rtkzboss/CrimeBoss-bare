#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_DebugSystemSettingsUpdatedEventSignatureDelegate.h"
#include "IGS_DebugSubsystem.generated.h"

class UIGS_DebugSubsystem;
class UIGS_DebugSubsystemBlueprint;
class UObject;

UCLASS(BlueprintType, ConfigDoNotCheckDefaults, Config=GameUserSettings)
class BF_DEBUG_API UIGS_DebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_DebugSystemSettingsUpdatedEventSignature OnDebugSystemSettingsUpdatedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AutomaticLeanVisualization;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool WeaponVisibilityDraw;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerUseComponent;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerScanComponent;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowEnemies;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowEnemyHealth;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowFear;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowDetectionValue;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowVisibilityValue;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowDangerEvents;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowObstacles;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowCovers;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowSpawnPoints;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerSuppression;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool Throwables;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool Ping;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MetricsMeasure;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AIVisibilityTrace;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AIVisionShapes;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DrawSuspicion;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerPosition;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerWeaponShootingTrace;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AIWeaponShootingTrace;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MeleeWeaponTrace;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool TrafficSystem;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AimAssistDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool NPCDirectionArrows;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool FootIK;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ArmsAnimations;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerAnimations;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool IsLying;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerDamageReceivedDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AllDamageReceivedDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerHealth;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DisableSpread;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DisableRecoil;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool EnableFullFriendlyFire;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool BlockHealthRegen;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DisableTracerEffects;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DisableAimAssist;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool Buddha;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool RoomNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PolysWithoutRoom;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PopulatorSolutionLocation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool HumanPolys;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool FightNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PathFollowNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AvoidanceNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool CoverNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool TacticalNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool TrafficNavigation;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PatrolPoints;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PatrolPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PatrolPointsLogging;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PatrolPointsLoggingVerbose;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool UseOldDetectionMeter;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool SwatAIDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool KillCameras;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool KillHeartbeat;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool KillControlRadio;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool KillAlarmButtons;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PressureDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PressureDebugGraph;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PressureSpawnIntensityEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DialoguesDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DialoguesDebugWidget;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DialoguesUseGenericCharacters;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DialoguesPlayTTS;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AkEventList;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AkEventWorld;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DebugSounds;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool FloatingDamageNumbers;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ForceFullHud;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool RoomCapacity;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DistantSpawnPoints;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ConnectionPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool SpawnPointsVisibleInPIE;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool VehiclesDisabled;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AllowRespawn;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MarkMutable;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MarkTemporary;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ReloadWeaponDatabase;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool HeisterBarksDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AIBarksDebug;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerCrosshairEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool PlayerInput;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool UseMaxLevelUniqueCharacter;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool RandomizeWeaponSkins;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ShowMissionBagCount;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MetaHumanAI;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool ForceHideDebugInfo;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool VarDump;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool MutableInfo;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DetectiveSpawnsIgnoreMeta;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool SessionRevisionCheck;
    
    UPROPERTY(Config, VisibleAnywhere)
    bool UseCustomMission;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool DebugAIGrenadeManager;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AssetsPreloader;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AssetsPreloaderLogging;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool AlarmEnabled;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool KillStrikeDisabled;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PacketLag;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PacketLagVariance;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PacketLoss;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    int32 PacketJitter;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool InfiniteAmmo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool InfiniteMagazines;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool MaximumDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool AIDamageDisabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool AIPerceptionDisabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool AILogicDisabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool DisableOutlines;
    
    UPROPERTY(BlueprintReadOnly)
    UIGS_DebugSubsystemBlueprint* DebugSubsystemBlueprint;
    
public:
    UIGS_DebugSubsystem();

    UFUNCTION(BlueprintCallable)
    void ToggleSessionInfo();
    
    UFUNCTION(BlueprintCallable)
    void TogglePressureGraph();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMovementSpeedDebug();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFPVDebugView();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugCrosshair();
    
    UFUNCTION(BlueprintCallable)
    void Toggle_UseCustomMission(bool inChecked);
    
    UFUNCTION(BlueprintCallable)
    void Toggle3PVCamera();
    
    UFUNCTION(BlueprintCallable)
    void ThrowGas();
    
    UFUNCTION(BlueprintCallable)
    void ThrowFrag();
    
    UFUNCTION(BlueprintCallable)
    void ThrowFlash();
    
    UFUNCTION(BlueprintCallable)
    void SpawnUnit(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpec, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSWAT(FVector InLocation, int32 inCount, bool inUseCrosshairLocation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnHeister(FVector InLocation, int32 inCount, bool inUseCrosshairLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetPacketLoss(const UObject* inWCO, int32 inPacketLoss);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetPacketLagVariance(const UObject* inWCO, int32 inPacketLagVariance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetPacketLag(const UObject* inWCO, int32 inPacketLag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetPacketJitter(const UObject* inWCO, int32 inPacketLoss);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetPacketEmulationEnabled(const UObject* inWCO, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void PrintAim();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings(bool inForceReload);
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_WeaponVisibilityDraw() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_VehiclesDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_VarDump() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_UseOldDetectionMeter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_UseMaxLevelUniqueCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_UseCustomMission() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_TrafficSystem() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_TrafficNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_Throwables() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_TacticalNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_SwatAIDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_SpawnPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowVisibilityValue() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowSpawnPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowObstacles() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowMissionBagCount() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowFear() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowEnemyHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowEnemies() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowDetectionValue() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowDangerEvents() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ShowCovers() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_SessionRevisionCheck() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_RoomNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_RoomCapacity() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ReloadWeaponDatabase() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_RandomizeWeaponSkins() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PressureSpawnIntensityEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PressureDebugGraph() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PressureDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PopulatorSolutionLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PolysWithoutRoom() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerUseComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerSuppression() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerScanComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerInput() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerCrosshairEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PlayerAnimations() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_Ping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PatrolPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PatrolPointsLoggingVerbose() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PatrolPointsLogging() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PatrolPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_PathFollowNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_NPCDirectionArrows() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MutableInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MetricsMeasure() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MetaHumanAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MeleeWeaponTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MarkTemporary() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_MarkMutable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_Lying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_KillStrikeDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_KillHeartbeat() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_KillControlRadio() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_KillCameras() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_KillAlarmButtons() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_HumanPolys() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_HeisterBarksDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ForceHideDebugInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ForceFullHud() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_FootIK() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_FloatingDamageNumbers() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_FightNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_EnableFullFriendlyFire() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DrawSuspicion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DistantSpawnPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DisableTracerEffects() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DisableSpread() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DisableRecoil() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DisableAimAssist() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DialoguesDebugWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DialoguesDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DetectiveSpawnsIgnoreMeta() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DebugSounds() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_DebugAIGrenadeManager() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_CoverNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ConnectionPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_Buddha() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_BlockHealthRegen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AvoidanceNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AutomaticLeanVisualization() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AssetsPreloaderLogging() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AssetsPreloader() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_ArmsAnimations() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AllowRespawn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AllDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AlarmEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AkEventWorld() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AkEventList() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AIWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AIVisionShapes() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AIVisibilityTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AimAssistDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool IsToggledOn_AIBarksDebug() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_DebugSubsystem* Instance(const UObject* inWCO);
    
    UFUNCTION(BlueprintPure)
    int32 GetPacketLoss() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPacketLagVariance() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPacketLag() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPacketJitter() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_DebugSubsystemBlueprint* GetBPDebugSubsystem() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

