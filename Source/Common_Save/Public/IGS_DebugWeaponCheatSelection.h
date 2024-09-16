#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_WeaponCheatSelection_DebugData.h"
#include "IGS_DebugWeaponCheatSelection.generated.h"

UCLASS(BlueprintType)
class COMMON_SAVE_API UIGS_DebugWeaponCheatSelection : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UIGS_DebugWeaponCheatSelection();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FIGS_WeaponCheatSelection_DebugData SaveData_WeaponCheatSelection;

};
