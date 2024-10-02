#pragma once
#include "CoreMinimal.h"
#include "IGS_MenuItemCategoryWidget.h"
#include "IGS_MenuTileWidget.h"
#include "EIGS_MenuTileSelectionType.h"
#include "IGS_MultiplayerJobCategoryRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_JobsScreenCategoryWidget.generated.h"

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UIGS_JobsScreenCategoryWidget : public UIGS_MenuItemCategoryWidget {
    GENERATED_BODY()
public:
    UIGS_JobsScreenCategoryWidget();

    UFUNCTION(BlueprintCallable)
    void InitJobCategory(const FIGS_MultiplayerJobCategoryRow& categoryData, EIGS_MenuTileSelectionType inCategoryItemSelectionType, TSubclassOf<UIGS_MenuTileWidget> inItemWidgetClass);

};
