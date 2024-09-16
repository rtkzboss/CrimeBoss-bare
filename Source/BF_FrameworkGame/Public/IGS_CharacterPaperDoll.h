#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueInterface.h"
#include "IGS_WieldAnyItemInterface.h"
#include "Engine/EngineTypes.h"
#include "Animation/PoseSnapshot.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "IGS_PlayVariationData.h"
#include "PaperDollAbstract.h"
#include "IGS_CharacterPaperDoll.generated.h"

class AActor;
class UAkComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_CharacterPaperDoll : public APaperDollAbstract, public IIGS_WieldAnyItemInterface, public IIGS_DialogueInterface {
    GENERATED_BODY()
public:
    AIGS_CharacterPaperDoll(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StopDialogueVoiceInternal(const FIGS_PlayVariationData& inVariationData) const;

    UFUNCTION(BlueprintImplementableEvent)
    void SetVoiceVoice2DModeEnabledInternal(bool inState) const;

public:
    UFUNCTION(BlueprintCallable)
    void SaveHeadSnapshot();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ResetVoiceSFXInternal() const;

    UFUNCTION(BlueprintImplementableEvent)
    void PlayDialogueVoiceInternal(const FIGS_PlayVariationData& inVariationData) const;

    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayingVoiceInternal(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter) const;

    UFUNCTION(BlueprintImplementableEvent)
    float GetVoiceProgressInternal(int32 inGroupID) const;

public:
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetHeadComp();

    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetBodyComp();

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* RootSceneComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponentBudgeted* BaseMesh;

    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    FPoseSnapshot HeadSnapshot;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* LeftHandAttachedActor;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* RightHandAttachedActor;

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkComponent* AkComponent;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FIGS_DialogueGroupCharacterHolder DialogueHolder;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(EditAnywhere)
    FComponentReference HeadComponentReference;

    UPROPERTY(EditAnywhere)
    FComponentReference BodyComponentReference;


    // Fix for true pure virtual functions not being implemented
};
