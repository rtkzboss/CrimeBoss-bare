#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MultiplayerJobCategoryItemRow.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "IGS_MultiplayerJobsDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_MultiplayerJobsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MultiplayerJobsDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FGameplayTagContainer GetScenariosForJob(UObject* inWCO, const FGameplayTag inJobTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FGameplayTagContainer GetRandomScenarioForQJLobby(UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MultiplayerJobCategoryRow GetMultiplayerJobCategory(UObject* inWCO, const FGameplayTag inMultiplayerJobCategoryID, bool& outSucceeded);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_MultiplayerJobCategoryItemRow> GetJobsInCategory(UObject* inWCO, FGameplayTag inCategoryTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MultiplayerJobCategoryItemRow GetItemRow(UObject* inWCO, const FGameplayTag inItemRowID);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_MultiplayerJobCategoryRow> GetAllCategories(UObject* inWCO);

};
