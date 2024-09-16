#pragma once
#include "CoreMinimal.h"
#include "IGS_TaskWidgetBase.h"
#include "IGS_TaskWidgetHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_TaskWidgetOr.generated.h"

class UOverlay;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TaskWidgetOr : public UIGS_TaskWidgetBase {
    GENERATED_BODY()
public:
    UIGS_TaskWidgetOr();

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UOverlay* FirstTaskBox;

    UPROPERTY(BlueprintReadWrite, Instanced, meta=(BindWidget))
    UOverlay* SecondTaskBox;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetHolder> TaskWidgetHolderClass;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPlayWidgetAnimations;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_TaskWidgetBase> TaskWidgetClass;

};
