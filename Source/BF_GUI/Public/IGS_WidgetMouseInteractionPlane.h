#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnHoverBorderHoverEventDelegate.h"
#include "IGS_WidgetMouseInteractionPlane.generated.h"

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetMouseInteractionPlane : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetMouseInteractionPlane();

    UPROPERTY(BlueprintAssignable)
    FOnHoverBorderHoverEvent OnHoverBorderHover;
    
    UPROPERTY(BlueprintAssignable)
    FOnHoverBorderHoverEvent OnHoverBorderUnhover;
    
};

