#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "IGS_WorldWidgetData.generated.h"

USTRUCT(BlueprintType)
struct BF_GUI_API FIGS_WorldWidgetData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> WidgetClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowProgressBar;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsGrenade;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ThrowableInventoryObject> GrenadeID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInvertFading;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShrinkWithDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D Pivot;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTreatEdgeAsOnScreen;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOuterEdge;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartAtCenter;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartWithEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowOnlyOffScreen;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowArrow;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideWhenOccluded;

    FIGS_WorldWidgetData();
};
