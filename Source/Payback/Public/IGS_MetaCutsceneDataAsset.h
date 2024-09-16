#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaCutsceneNodeAction.h"
#include "EMETA_Partner.h"
#include "IGS_MetaCutsceneNode.h"
#include "IGS_MetaCutsceneOverrideData.h"
#include "IGS_MetaCutsceneProp.h"
#include "IGS_MetaCutsceneSlotSetup.h"
#include "IGS_MetaCutsceneDataAsset.generated.h"

class UAkAudioEvent;
class UAkStateValue;
class UWorld;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_MetaCutsceneDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MetaCutsceneDataAsset();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEventIDTag() const;

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetAllChoicesTags();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_Partner Partner;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftObjectPtr<UWorld>> AdditionalLevels;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIGS_MetaCutsceneProp> AdditionalSpawnProps;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> CutsceneLevel;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UWorld> SetupLevel;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkStateValue* EnvironmentAkState;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* MusicSongAkEvent;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PlayDelay;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PoseAnimationStartTime;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool MuteBackgroundMusic;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool MuteSounds;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool HideLevel;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsSkippable;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_MetaCutsceneNodeAction ForceChoiceResult;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CustomSlotPairing;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventID;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacterSlot> SlotPairing;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_MetaCutsceneSlotSetup DialogueCharacterSlots;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_MetaCutsceneSlotSetup CutsceneCharacterSlots;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_MetaCutsceneOverrideData OverrideData;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIGS_MetaCutsceneNode FirstNode;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FIGS_MetaCutsceneNode> Nodes;

};
