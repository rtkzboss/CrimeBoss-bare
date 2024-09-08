#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_WeaponModsHandler.generated.h"

class AIGS_WeaponBase;
class UIGS_ModInventoryObject;
class UIGS_OutlineComponent;
class UIGS_WeaponInventoryObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponModsHandler : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_WeaponBase> OwningWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WeaponInventoryObject> OwningWeaponObject;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_OutlineComponent> OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UIGS_ModInventoryObject*> ActiveMods;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EIGS_ModType> ActiveModTypes;
    
public:
    UIGS_WeaponModsHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasWeaponModOfType(EIGS_ModType inType) const;
    
    UFUNCTION(BlueprintPure)
    UIGS_ModInventoryObject* GetWeaponModOfType(EIGS_ModType inType) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentReloadTimeMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentMagazineCapacity() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const;
    
};

