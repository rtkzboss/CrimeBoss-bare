#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "Components/ActorComponent.h"
#include "WeaponInterrutpReloadSignatureDelegate.h"
#include "WeaponReloadSignatureDelegate.h"
#include "IGS_ReloaderBase.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ReloaderBase : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ReloaderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAddAmmoToWeapon();
    
    UFUNCTION(BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentReloadSpeed(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION(BlueprintCallable)
    bool CanReload();
    
    UFUNCTION(BlueprintPure)
    bool CanBeInterrupted() const;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsInterruptible;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadSignature OnWeaponBeginReload;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadSignature OnWeaponStopReload;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponInterrutpReloadSignature OnWeaponInterruptReload;
    
};

