#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetIconsCanvas.generated.h"

class UCanvasPanel;
class UIGS_WorldSpaceUserWidget;
class UIGS_WorldSpaceWidgetManager;
class UIGS_WorldWidgetDatabase;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WidgetIconsCanvas : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WorldSpaceUserWidget> WidgetIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D EdgeMarginX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D EdgeMarginY;
    
    UPROPERTY(Instanced)
    UCanvasPanel* IconCanvas;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector PlayerCameraLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlayerCameraRotationFwdVector;
    
private:
    UPROPERTY(Instanced)
    UIGS_WorldSpaceWidgetManager* m_WorldWidgetManager;
    
    UPROPERTY(Instanced)
    TArray<UIGS_WorldSpaceUserWidget*> m_SpawnedWidgets;
    
    UPROPERTY()
    UIGS_WorldWidgetDatabase* m_WidgetIconDatabase;
    
public:
    UIGS_WidgetIconsCanvas();

    UFUNCTION(BlueprintImplementableEvent)
    void SetWidgetPosition(UIGS_WorldSpaceUserWidget* InWidget, FVector2D InLocation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetWidgetXY(FVector InLocation, FVector2D& outXY, bool bOuterEdge, float& outAngle);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetShowOnlyOffScreen(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetHasWidgetTypeOuterEdgeOverride(EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetHasWidgetTypeEdgeOverride(EIGS_WorldWidgetType inType);
    
};

