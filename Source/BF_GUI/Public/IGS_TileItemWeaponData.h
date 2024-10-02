#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponModeUIData.h"
#include "ETileComparisonUIData.h"
#include "IGS_TileItemData.h"
#include "IGS_TileItemWeaponData.generated.h"

UCLASS()
class BF_GUI_API UIGS_TileItemWeaponData : public UIGS_TileItemData {
    GENERATED_BODY()
public:
    UIGS_TileItemWeaponData();

    UFUNCTION(BlueprintCallable)
    void SetModsUIData(TArray<FIGS_WeaponModeUIData> inModsUIData);

    UFUNCTION(BlueprintCallable)
    void SetComparisonData(ETileComparisonUIData inComparisonUIData);

    UFUNCTION(BlueprintPure)
    TArray<FIGS_WeaponModeUIData> GetModsUIData() const;

    UFUNCTION(BlueprintPure)
    ETileComparisonUIData GetComparisonData() const;

private:
    UPROPERTY()
    ETileComparisonUIData m_ComparisonUIData;

    UPROPERTY()
    TArray<FIGS_WeaponModeUIData> m_ModsUIData;

};
