#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_MeleeWeaponInventoryObject.h"
#include "IGS_MeleeWeaponTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_MeleeWeaponDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_MeleeWeaponDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MeleeWeaponDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_MeleeWeaponInventoryObject>& inClass) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MeleeWeaponTableRow GetDataMeleeWeapon(UObject* inWCO, const TSubclassOf<UIGS_MeleeWeaponInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_MeleeWeaponTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

};
