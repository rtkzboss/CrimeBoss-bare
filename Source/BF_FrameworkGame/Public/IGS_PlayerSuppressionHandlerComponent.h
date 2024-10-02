#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_OnBulletMissCameraShakeSignature.h"
#include "IGS_OnDirectionalPlayerCueSignature.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_PlayerSuppressionHandlerComponent.generated.h"

class AIGS_GameCharacterBase;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuppressionHandlerComponent : public UIGS_SuppressionHandlerComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayWhizSound() const;

    UFUNCTION(Client, Unreliable)
    void PlayDirectionalPlayerCue_Client(const AIGS_GameCharacterBase* inSourceCharacter, const EIGS_DirectionalCueType inType) const;

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnBulletMissCameraShakeSignature OnBulletMissCameraShake;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDirectionalPlayerCueSignature OnPlayDirectionalPlayerCueEvent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionalCueCooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionalMeleeCueRange;

protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* DirectionalBulletWhizAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* DirectionalMeleeCueAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* BulletWhizAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* SniperSonicCrackAkEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkRtpc* SniperSonicCrackRtpc;

};
