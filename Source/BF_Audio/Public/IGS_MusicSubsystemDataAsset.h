#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_LightingScenarioType.h"
#include "IGS_MusicMissionSettings.h"
#include "IGS_MusicSubsystemDataAsset.generated.h"

class UAkAudioEvent;
class UAkStateValue;

UCLASS()
class UIGS_MusicSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MusicSubsystemDataAsset();

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicPauseAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicResumeAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicSongPlayAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicSongStopAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicScenicPlayAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicScenicStopAkEvent;

    UPROPERTY(EditAnywhere)
    TArray<UAkStateValue*> MusicScenicVariants;

    UPROPERTY(EditAnywhere)
    TArray<UAkStateValue*> MusicScenicCustomPacks;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageNoneAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageVideoAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageMainMenuAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageMultiplayerMenuAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageMetaAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageLobbyAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageLoadingAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageMissionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* GameStageStarterMapAkState;

    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FIGS_MusicMissionSettings> MissionSettings;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* LevelStartAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* LevelEndAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Strike1AkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Strike2AkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Strike3AkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* CombatPhaseAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* ControlPhaseAkEvent;

    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Assault1PhaseAkEvent;

    UPROPERTY(EditAnywhere)
    UAkStateValue* DefaultMissionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* NoneMissionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* NoMusicAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Stealth1AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Stealth2AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CombatAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* ControlAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Assault1AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Assault2AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* BlackscreenStealthAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* BlackscreenAssaultAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* BlackscreenControlAkState;

    UPROPERTY(EditAnywhere)
    float BlackscreenAkStateChangeTime;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CutsceneAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Custom1AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Custom2AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Custom3AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* Custom4AkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomSilenceAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomFadeInAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomStealthTensionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomBuildUpActionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomActionAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CustomFadeOutAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CutsceneNoMusicAkState;

    UPROPERTY(EditAnywhere)
    UAkStateValue* CutsceneNoSoundAkState;

    UPROPERTY(EditAnywhere)
    TMap<EIGS_LightingScenarioType, UAkStateValue*> LightingScenarioStateMap;

};
