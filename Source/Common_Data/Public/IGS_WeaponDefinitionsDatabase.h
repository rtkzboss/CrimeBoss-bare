#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponDefinitionTableRow.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponDefinitionsDatabase.generated.h"

class UDataAsset;
class UDataTable;
class UIGS_WeaponSkinData;
class UObject;
class UTexture2D;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_WeaponDefinitionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_WeaponDefinitionsDatabase();

    UFUNCTION(BlueprintCallable)
    static void SetWeaponIcon(UPARAM(Ref) FIGS_WeaponDefinitionTableRow& inStructRef, TSoftObjectPtr<UIGS_WeaponSkinData> inWeaponSkin, TSoftObjectPtr<UTexture2D> inWeaponIcon);

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FGameplayTag GetWiedableClassById(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftObjectPtr<UTexture2D> GetWeaponIcon(UObject* inWCO, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponObject, TSoftObjectPtr<UDataAsset> inWeaponSkin);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_WeaponDefinitionsDatabase* GetWeaponDefinitionsDatabaseInstance(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponDefinitionTableRow GetDataWeaponByTagID(const UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_WeaponDefinitionTableRow GetDataWeapon(const UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inClass, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_WeaponDefinitionTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

    UFUNCTION(BlueprintCallable)
    TArray<FIGS_WeaponDefinitionTableRow> GetDatabaseTableBP();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_WeaponDefinitionTableRow> GetAllGenerableWeaponsData(const UObject* inWCO, bool inIncludeDLCs);

};
