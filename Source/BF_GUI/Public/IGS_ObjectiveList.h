#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ObjectiveWidget.h"
#include "Templates/SubclassOf.h"
#include "IGS_ObjectiveList.generated.h"

class UVerticalBox;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_ObjectiveList : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_ObjectiveList();

    UFUNCTION(BlueprintCallable)
    void InitializeObjective();

    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ObjectiveBox;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ObjectiveWidget> ObjectiveWidgetClass;

};
