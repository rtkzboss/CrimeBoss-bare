#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponInventoryObject.h"
#include "IGS_WeaponTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDatabase.generated.h"

class UDataTable;
class UIGS_PerWeaponClassSettingsDataAsset;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_WeaponDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WeaponDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponTableRow GetWeaponDataByTag(UObject* inWCO, FGameplayTag inTag, bool& outSucceeded);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_WeaponDatabase* GetWeaponDatabaseInstance(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponTableRow GetWeaponData(UObject* inWCO, const TSubclassOf<UIGS_WeaponInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_WeaponTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

private:
    UPROPERTY(Transient)
    UIGS_PerWeaponClassSettingsDataAsset* PerClassWeaponSettings;

};
