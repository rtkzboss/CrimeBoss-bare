#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractiveIndicatorsCanvas.generated.h"

class UCanvasPanel;
class UIGS_InteractionIndicatorSingleWidget;
class UIGS_InteractiveComponent;
class UIGS_InteractiveObjectsManager;
class UIGS_UseComponent;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_InteractiveIndicatorsCanvas : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_InteractionIndicatorSingleWidget> WidgetIconClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeDistance;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCanvasPanel* IconCanvas;
    
private:
    UPROPERTY()
    UIGS_InteractiveObjectsManager* m_InteractiveObjectsManager;
    
    UPROPERTY(Instanced)
    TArray<UIGS_InteractiveComponent*> m_InteractionsArray;
    
    UPROPERTY(Instanced)
    TArray<UIGS_InteractionIndicatorSingleWidget*> m_SpawnedWidgets;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UIGS_UseComponent> m_OwningUseComponent;
    
public:
    UIGS_InteractiveIndicatorsCanvas();

    UFUNCTION(BlueprintImplementableEvent)
    void GetWidgetXY(FVector InLocation, FVector2D& outXY, float& outAngle);
    
};

