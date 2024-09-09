#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_AimAnimationInfo.h"
#include "IGS_ArmsLeaningAnimationOneFrameParams.h"
#include "IGS_GameEventsAnimInstance.h"
#include "TPP_ActionSlotType.h"
#include "IGS_UWeaponAniminstance.generated.h"

class AIGS_IntelligentGameCharacter;
class AIGS_PlayerCharacter;
class AIGS_WeaponBase;
class UIGS_AutomaticShooter;
class UIGS_PlayerAnimInstance;
class UIGS_ReloaderBase;
class UIGS_ShooterBase;
class UIGS_SimpleReloader;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_UWeaponAniminstance : public UIGS_GameEventsAnimInstance {
    GENERATED_BODY()
public:
    UIGS_UWeaponAniminstance();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateReload(bool WantReload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateAttack(bool WantAttack);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideStarted_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlideEnded_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReloadInterrupt_Event(EIGS_ReloadInterruptReasonEnum inReason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMagCheckInterrupt_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInspectInterrupt_Event();
    
    UFUNCTION(BlueprintPure)
    bool Is_TPP_Animinstance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void GrenadeThrow_Event(TPP_ActionSlotType InAction, bool inLow);
    
    UFUNCTION(BlueprintPure)
    EIGS_WeaponAttackType GetAttackType() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimNotify_OnReloadFromMontage();
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAmmoInMagazine;
    
    UPROPERTY(BlueprintReadOnly)
    float CharacterSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    bool CharacterJump;
    
    UPROPERTY(BlueprintReadOnly)
    bool CharacterCrouch;
    
    UPROPERTY(BlueprintReadOnly)
    float ReloadPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    FIGS_ArmsLeaningAnimationOneFrameParams LeansInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterLeaningDirectionEnum LeaningDirection;
    
protected:
    UPROPERTY(Instanced, Transient)
    UIGS_AutomaticShooter* m_AutomaticShooter;
    
    UPROPERTY(Transient)
    AIGS_WeaponBase* m_WeaponBase;
    
    UPROPERTY(Instanced, Transient)
    UIGS_ShooterBase* m_ShooterBase;
    
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_ReloaderBase* m_ReloadBase;
    
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_SimpleReloader* m_SimpleReloader;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AIGS_IntelligentGameCharacter* m_Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AIGS_PlayerCharacter* m_PlayerCharacter;
    
    UPROPERTY()
    FIGS_AimAnimationInfo m_AimAnimationInfo;
    
    UPROPERTY(Transient)
    UIGS_PlayerAnimInstance* m_PlayerAnimInstance;
    
};

