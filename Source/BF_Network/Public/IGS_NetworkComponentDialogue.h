#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.h"
#include "IGS_NetworkDialogueEvent.h"
#include "IGS_NetworkComponentDialogue.generated.h"

class UAkSwitchValue;
class UIGS_ComponentDialogueDataAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentDialogue : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_NetworkComponentDialogue(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopVoice(const FIGS_PlayVariationData& inPlayVariationData);

    UFUNCTION(BlueprintCallable)
    void Set2DModeEnabled(bool inState);

    UFUNCTION(BlueprintCallable)
    void PlayVoice(const FIGS_PlayVariationData& inPlayVariationData);

    UFUNCTION(BlueprintCallable)
    bool IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter);

    UFUNCTION(BlueprintCallable)
    float GetVoiceProgress(int32 inGroupID);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void All_ResetVoiceSGX(uint16 inGroupID);

    UFUNCTION(NetMulticast, Reliable)
    void All_OnStopVoice(FIGS_PlayVariationData inPlayVariationData);

    UFUNCTION(NetMulticast, Reliable)
    void All_OnPlayVoice(FIGS_PlayVariationData inPlayVariationData);

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_NetworkDialogueEvent OnVoiceStartedEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_NetworkDialogueEvent OnVoiceStopedEvent;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* OverrideCharacterAkSwitch;

    UPROPERTY()
    UIGS_ComponentDialogueDataAsset* ComponentData;

};
