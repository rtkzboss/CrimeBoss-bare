#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuTileDataBase.h"
#include "IGS_PlotlineSelectionDefinition.h"
#include "IGS_MenuTileData_PlotlineSelector.generated.h"

UCLASS()
class COMMON_DATA_API UIGS_MenuTileData_PlotlineSelector : public UIGS_MenuTileDataBase {
    GENERATED_BODY()
public:
    UIGS_MenuTileData_PlotlineSelector();

    UFUNCTION(BlueprintCallable)
    void SetIsUnlocked(const bool inUnlocked);

    UFUNCTION(BlueprintCallable)
    void SetData(const FIGS_PlotlineSelectionDefinition& inData);

    UFUNCTION(BlueprintPure)
    FGameplayTag GetUnlockCriteriaTag() const;

    UFUNCTION(BlueprintPure)
    FText GetLockedMessage();

    UFUNCTION(BlueprintPure)
    bool GetIsUnlocked() const;

    UFUNCTION(BlueprintPure)
    bool GetIsPlotline() const;

    UFUNCTION(BlueprintCallable)
    FIGS_PlotlineSelectionDefinition GetData();

private:
    UPROPERTY()
    FIGS_PlotlineSelectionDefinition Data;

    UPROPERTY()
    bool IsUnlocked;

};
