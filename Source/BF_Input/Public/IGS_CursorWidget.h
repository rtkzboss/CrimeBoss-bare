#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_CursorWidget.generated.h"

UCLASS(EditInlineNew)
class BF_INPUT_API UIGS_CursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_CursorWidget();

    UFUNCTION(BlueprintPure)
    bool IsCursorHovering() const;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHovering;
    
};

