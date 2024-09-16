#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_SubwidgetHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SubwidgetHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_HUDSubwidgetBase> SubwidgetClass;

    UPROPERTY(BlueprintReadWrite, Instanced)
    UIGS_HUDSubwidgetBase* SubwidgetInstance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SubwidgetName;

    BF_GUI_API FIGS_SubwidgetHolder();
};
