#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_ObjectivePresetTableRow.h"
#include "META_ObjectiveRewardData.h"
#include "META_ObjectiveTableRow.h"
#include "META_ObjectiveDatabase.generated.h"

class UDataTable;
class UMETA_BaseFPSMission;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UMETA_ObjectiveDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_ObjectiveDatabase();

    UFUNCTION(BlueprintCallable)
    void SetObjectiveByID(FGameplayTag inObjectiveID, FMETA_ObjectiveRewardData inObjectiveReward, UMETA_BaseFPSMission* inMission);

    UFUNCTION(BlueprintCallable)
    TArray<FMETA_ObjectivePresetTableRow> GetPresetsDatabaseTable();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_ObjectivePresetTableRow GetPresetDataBP(const UObject* inWCO, FGameplayTag inID, bool& outSucceeded);

    UFUNCTION(BlueprintCallable)
    TArray<FMETA_ObjectiveTableRow> GetObjectivesDatabaseTable();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_ObjectiveTableRow GetObjectiveDataBP(const UObject* inWCO, FGameplayTag inID, bool& outSucceeded);

private:
    UPROPERTY()
    UDataTable* m_ObjectiveDatabase;

    UPROPERTY()
    UDataTable* m_ObjectivePresetsDatabase;

};
