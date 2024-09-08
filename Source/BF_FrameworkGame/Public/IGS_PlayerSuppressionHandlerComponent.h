#pragma once
#include "CoreMinimal.h"
#include "EIGS_DirectionalCueType.h"
#include "IGS_OnBulletMissCameraShakeSignatureDelegate.h"
#include "IGS_OnDirectionalPlayerCueSignatureDelegate.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_PlayerSuppressionHandlerComponent.generated.h"

class AIGS_GameCharacterBase;
class UAkAudioEvent;
class UAkRtpc;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuppressionHandlerComponent : public UIGS_SuppressionHandlerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnBulletMissCameraShakeSignature OnBulletMissCameraShake;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnDirectionalPlayerCueSignature OnPlayDirectionalPlayerCueEvent;
    
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
    
public:
    UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayWhizSound() const;
    
    UFUNCTION(Client, Unreliable)
    void PlayDirectionalPlayerCue_Client(const AIGS_GameCharacterBase* inSourceCharacter, const EIGS_DirectionalCueType inType) const;
    
};

