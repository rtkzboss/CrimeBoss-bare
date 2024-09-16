#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_InteractionArrowWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UIGS_InteractiveComponent;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_InteractionArrowWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_InteractionArrowWidget();

    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;

    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;

    UPROPERTY(BlueprintReadOnly)
    float ArrowRotation;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_InteractiveComponent* CurrentInteractiveComponent;

};
