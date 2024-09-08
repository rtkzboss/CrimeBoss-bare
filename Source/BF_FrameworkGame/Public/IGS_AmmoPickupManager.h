#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_AmmoPickupManager.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AmmoPickupManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AmmoPickupManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SpawnSpecificAmmoBox(UObject* inWCO, EIGS_AmmoBoxItem inBoxID, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnAmmoBox(AIGS_GameCharacterFramework* inInstigator, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetWeaponPickupsEnabled(UObject* inWCO, bool inState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetAmmoBoxesEnabled(UObject* inWCO, bool inState);
    
};

