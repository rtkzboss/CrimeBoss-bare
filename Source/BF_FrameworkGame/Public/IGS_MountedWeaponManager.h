#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_MountedWeaponManager.generated.h"

class AIGS_MountedWeapon;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_MountedWeaponManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AIGS_MountedWeapon*> m_MountedWeapons;
    
public:
    UIGS_MountedWeaponManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterMountedWeapon(AIGS_MountedWeapon* inDefendPoint);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMountedWeapon(AIGS_MountedWeapon* inDefendPoint);
    
};

