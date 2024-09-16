#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_CharacterSkinTableRow.h"
#include "IGS_CharacterSkinDatabase.generated.h"

class APaperDollAbstract;
class UDataTable;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_CharacterSkinDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_CharacterSkinDatabase();

    UFUNCTION(BlueprintCallable)
    void ModAppendDataTable(UDataTable* inNewTable);

    UFUNCTION(BlueprintPure)
    int32 GetIndex(FGameplayTag inID) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_CharacterSkinTableRow GetDataCharacterSkin(UObject* inWCO, FGameplayTag inID, bool& outSucceeded);

    UFUNCTION(BlueprintPure)
    FIGS_CharacterSkinTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_CharacterSkinDatabase* GetCharacterSkinDatabaseInstance(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TSoftClassPtr<APaperDollAbstract> GetCharacterPaperDoll(UObject* inWCO, FGameplayTag inID);

};
