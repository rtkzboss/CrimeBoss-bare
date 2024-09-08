#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_WeaponVisibilityType.h"
#include "IGS_ToggleVisibilityModDelegateSignatureDelegate.h"
#include "IGS_WeaponVisibilityHandler.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_WeaponBase;
class UArrowComponent;
class UIGS_WeaponInventoryObject;
class UNiagaraComponent;
class UNiagaraSystem;
class UParticleSystem;
class UParticleSystemComponent;
class UPointLightComponent;
class USpotLightComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponVisibilityHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool MaxLaserDistanceFromAimPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LaserDistanceFromAimPointOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool ForceLaserAimAtPoint;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ToggleVisibilityModDelegateSignature OnToggleVisibilityMod;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator LaserRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_WeaponBase> OwningWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WeaponInventoryObject> weaponObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwningCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UArrowComponent> LaserOrigin;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<USpotLightComponent> SpotLightComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UPointLightComponent> PointLightComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* LaserParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* LaserTortillaParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* LaserNiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* LaserTortillaNiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LaserParticleSpawnPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LaserParticleBeamTargetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LaserParticlePointSizeName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxLaserDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DotThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* WeaponScopeGlintNiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WeaponScopeGlintSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector WeaponScopeGlintOffset;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_SightGlintNiagaraComponent;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* m_LaserNiagaraComponent;
    
    UPROPERTY(Instanced)
    UParticleSystemComponent* m_LaserParticleSystemComponent;
    
    UPROPERTY(EditAnywhere)
    bool bTraceForward;
    
public:
    UIGS_WeaponVisibilityHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToggleMod();
    
    UFUNCTION(BlueprintCallable)
    bool SetModVisible(bool inVisible);
    
    UFUNCTION(BlueprintCallable)
    bool SetModActive(const EIGS_WeaponVisibilityType inType, const bool Inactive);
    
    UFUNCTION(BlueprintPure)
    bool IsModActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyModActive() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetLaserDirection() const;
    
};

