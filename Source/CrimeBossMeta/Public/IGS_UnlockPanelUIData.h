#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockPanelUIData.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_UnlockPanelUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;

    FIGS_UnlockPanelUIData();
};
