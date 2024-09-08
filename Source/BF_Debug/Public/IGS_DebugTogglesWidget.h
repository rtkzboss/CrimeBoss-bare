#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_DebugTogglesWidget.generated.h"

UCLASS(EditInlineNew)
class BF_DEBUG_API UIGS_DebugTogglesWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_DebugTogglesWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_WeaponVisibilityDraw(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_VehiclesDisabled(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_VarDump(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_UseOldDetectionMeter(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_UseMaxLevelUniqueCharacter(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_TrafficSystem(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_TrafficNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_Throwables(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_TacticalNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_SwatAIDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_SpawnPointsVisibleInPIE(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowVisibilityValue(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowSpawnPoints(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowObstacles(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowMissionBagCount(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowFear(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowEnemyHealth(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowEnemies(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowDetectionValue(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowDangerEvents(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ShowCovers(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_SessionRevisionCheck(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_RoomNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_RoomCapacity(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ReloadWeaponDatabase(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_RandomizeWeaponSkins(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PressureSpawnIntensityEnabled(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PressureDebugGraph(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PressureDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PopulatorSolutionLocation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PolysWithoutRoom(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerWeaponShootingTrace(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerUseComponent(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerSuppression(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerScanComponent(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerPosition(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerHealth(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerDamageReceivedDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerCrosshairEnabled(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PlayerAnimations(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_Ping(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PatrolPointsVisibleInPIE(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PatrolPointsLoggingVerbose(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PatrolPointsLogging(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PatrolPoints(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_PathFollowNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_NPCDirectionArrows(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MutableInfo(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MetricsMeasure(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MetaHumanAI(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MeleeWeaponTrace(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MarkTemporary(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_MarkMutable(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_KillStrikeDisabled(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_IsMoving(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_IsLying(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_HumanPolys(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_HeisterBarksDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ForceHideDebugInfo(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ForceFullHud(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_FootIK(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_FloatingDamageNumbers(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_FightNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_EnableFullFriendlyFire(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DrawSuspicion(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DistantSpawnPoints(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DisableSpread(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DisableRecoil(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DisableAimAssist(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DialoguesDebugWidget(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DialoguesDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DetectiveSpawnsIgnoreMeta(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DebugSounds(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_DebugAIGrenadeManager(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_CoverNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ConnectionPointsVisibleInPIE(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_Buddha(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_BlockHealthRegen(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AvoidanceNavigation(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AutomaticLeanVisualization(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AssetsPreloaderLogging(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AssetsPreloader(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_ArmsAnimations(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AllowRespawn(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AllDamageReceivedDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AlarmEnabled(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AkEventWorld(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AkEventList(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AIWeaponShootingTrace(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AIVisionShapes(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AIVisibilityTrace(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AimAssistDebug(bool inChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Toggle_AIBarksDebug(bool inChecked) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDebugSystemSettingsChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool Get_WeaponVisibilityDraw() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_VehiclesDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_VarDump() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_UseOldDetectionMeter() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_UseMaxLevelUniqueCharacter() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_TrafficSystem() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_TrafficNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_Throwables() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_TacticalNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_SwatAIDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_SpawnPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowVisibilityValue() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowSpawnPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowObstacles() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowMissionBagCount() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowFear() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowEnemyHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowEnemies() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowDetectionValue() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowDangerEvents() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ShowCovers() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_SessionRevisionCheck() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_RoomNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_RoomCapacity() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ReloadWeaponDatabase() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_RandomizeWeaponSkins() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PressureSpawnIntensityEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PressureDebugGraph() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PressureDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PopulatorSolutionLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PolysWithoutRoom() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerUseComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerSuppression() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerScanComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerPosition() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerHealth() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerCrosshairEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PlayerAnimations() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_Ping() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PatrolPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PatrolPointsLoggingVerbose() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PatrolPointsLogging() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PatrolPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_PathFollowNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_NPCDirectionArrows() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MutableInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MetricsMeasure() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MetaHumanAI() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MeleeWeaponTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MarkTemporary() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_MarkMutable() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_KillStrikeDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_IsLying() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_HumanPolys() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_HeisterBarksDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ForceHideDebugInfo() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ForceFullHud() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_FootIK() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_FloatingDamageNumbers() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_FightNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_EnableFullFriendlyFire() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DrawSuspicion() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DistantSpawnPoints() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DisableSpread() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DisableRecoil() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DisableAimAssist() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DialoguesDebugWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DialoguesDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DetectiveSpawnsIgnoreMeta() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DebugSounds() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_DebugAIGrenadeManager() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_CoverNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ConnectionPointsVisibleInPIE() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_Buddha() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_BlockHealthRegen() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AvoidanceNavigation() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AutomaticLeanVisualization() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AssetsPreloaderLogging() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AssetsPreloader() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_ArmsAnimations() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AllowRespawn() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AllDamageReceivedDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AlarmEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AkEventWorld() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AkEventList() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AIWeaponShootingTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AIVisionShapes() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AIVisibilityTrace() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AimAssistDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool Get_AIBarksDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ToggleSessionInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_TogglePressureGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ToggleMovementSpeedDebug() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ToggleFPVDebugView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ToggleDebugCrosshair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_Toggle3PVCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ThrowGas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ThrowFrag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Exec_ThrowFlash() const;
    
};

