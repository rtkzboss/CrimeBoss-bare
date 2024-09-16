#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "IGS_GASAttributeSetBase.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_GASAttributeSetBase : public UAttributeSet {
    GENERATED_BODY()
public:
    UIGS_GASAttributeSetBase();

protected:
    UFUNCTION()
    void OnRep_WeaponDamageMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ThrowableDamageMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_StunEffectivity(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_SprintSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_Selfrevive(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ReviveSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ReloadSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MoveSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MeleeWeaponRangeMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MeleeDamageReceived(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MeleeDamageMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MagazineSizeMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_MagazineSizeAddition(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_LookSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_HolsterSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_HipFireSpread(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_HealthRegenMultiplier(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_HealthRegenDelay(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_HealthMultiplier(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_FlashEffectivity(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_FireDamageReceived(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ExtraBag(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ExplosiveDamageReceived(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_DownStateDuration(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_DetectionSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_DamageReceived(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_CrouchSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_CarryingSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_BulletDamageReceived(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_BeingRevivedSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AmmoReserveSizeMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AmmoReserveSizeAddition(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AimingStability(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ADSSpread(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ADSSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_ADSMovementSpeed(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AdditionalDownStateCount(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AbilityRegenSpeedMult(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_AbilityDurationKillIncrease(const FGameplayAttributeData& inOldValue);

    UFUNCTION()
    void OnRep_Ability1Charges(const FGameplayAttributeData& inOldValue);

public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MoveSpeed)
    FGameplayAttributeData MoveSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SprintSpeed)
    FGameplayAttributeData SprintSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CrouchSpeed)
    FGameplayAttributeData CrouchSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_CarryingSpeed)
    FGameplayAttributeData CarryingSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ADSMovementSpeed)
    FGameplayAttributeData ADSMovementSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_WeaponDamageMult)
    FGameplayAttributeData WeaponDamageMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MeleeDamageMult)
    FGameplayAttributeData MeleeDamageMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ThrowableDamageMult)
    FGameplayAttributeData ThrowableDamageMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ReloadSpeed)
    FGameplayAttributeData ReloadSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ADSSpeed)
    FGameplayAttributeData ADSSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HolsterSpeed)
    FGameplayAttributeData HolsterSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_LookSpeed)
    FGameplayAttributeData LookSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MagazineSizeMult)
    FGameplayAttributeData MagazineSizeMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AmmoReserveSizeMult)
    FGameplayAttributeData AmmoReserveSizeMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MagazineSizeAddition)
    FGameplayAttributeData MagazineSizeAddition;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AmmoReserveSizeAddition)
    FGameplayAttributeData AmmoReserveSizeAddition;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HipFireSpread)
    FGameplayAttributeData HipFireSpread;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ADSSpread)
    FGameplayAttributeData ADSSpread;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AimingStability)
    FGameplayAttributeData AimingStability;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MeleeWeaponRangeMult)
    FGameplayAttributeData MeleeWeaponRangeMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DetectionSpeed)
    FGameplayAttributeData DetectionSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ExtraBag)
    FGameplayAttributeData ExtraBag;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DamageReceived)
    FGameplayAttributeData DamageReceived;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BulletDamageReceived)
    FGameplayAttributeData BulletDamageReceived;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ExplosiveDamageReceived)
    FGameplayAttributeData ExplosiveDamageReceived;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_FireDamageReceived)
    FGameplayAttributeData FireDamageReceived;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MeleeDamageReceived)
    FGameplayAttributeData MeleeDamageReceived;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HealthMultiplier)
    FGameplayAttributeData HealthMultiplier;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HealthRegenDelay)
    FGameplayAttributeData HealthRegenDelay;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HealthRegenDelay)
    FGameplayAttributeData HealthRegenMultiplier;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_FlashEffectivity)
    FGameplayAttributeData FlashEffectivity;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_StunEffectivity)
    FGameplayAttributeData StunEffectivity;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ReviveSpeed)
    FGameplayAttributeData ReviveSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BeingRevivedSpeed)
    FGameplayAttributeData BeingRevivedSpeed;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DownStateDuration)
    FGameplayAttributeData DownStateDuration;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AdditionalDownStateCount)
    FGameplayAttributeData AdditionalDownStateCount;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Selfrevive)
    FGameplayAttributeData Selfrevive;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing="OnRep_Ability1Charges")
    FGameplayAttributeData Ability1Charges;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AbilityRegenSpeedMult)
    FGameplayAttributeData AbilityRegenSpeedMult;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AbilityDurationKillIncrease)
    FGameplayAttributeData AbilityDurationKillIncrease;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
