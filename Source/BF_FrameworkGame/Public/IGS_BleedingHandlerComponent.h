#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "EIGS_BleedType.h"
#include "IGS_BleedTypeChangedEventSignatureDelegate.h"
#include "IGS_BleedingShuffleBagItem.h"
#include "IGS_DownStateHandlerComponentBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_BleedingHandlerComponent.generated.h"

class AIGS_RoomBase;
class UIGS_DamageTypeBase;
class UPhysicalMaterial;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BleedingHandlerComponent : public UIGS_DownStateHandlerComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_BleedTypeChangedEventSignature OnBleedTypeChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool CanBeRevived;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReviveTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InuredHealthTresholdPercantage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuredChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuredLifetimeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuredLifetimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float BleedChanceFromNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    float BleedChanceFromInjured;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedRestoreHealthPercantage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableWithCoversWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedPinnedWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableWithCoversLifetimeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableWithCoversLifetimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableLifetimeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedMoveableLifetimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedPinnedLifetimeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedPinnedLifetimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BleedDamageInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* HeadshotMaterial;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_BleedingShuffleBagItem> BleedingShuffleBag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UIGS_DamageTypeBase> BleedOutDamageType;
    
    UPROPERTY(Replicated)
    EIGS_BleedType mR_NextInjuryType;
    
    UPROPERTY(Replicated)
    EIGS_BleedType mR_NextBleedType;
    
    UPROPERTY(Replicated)
    bool InvulnerableInDownstate;
    
public:
    UIGS_BleedingHandlerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_StartInjured(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_StartBleeding(EIGS_BleedType BleedType, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Revive();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Die(float inHealthChanged, float inShieldChanged, const FIGS_HitInfo& inHitInfo);
    
};

