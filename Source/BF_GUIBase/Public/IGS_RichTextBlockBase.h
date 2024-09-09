#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "Components/RichTextBlock.h"
#include "IGS_RichTextBlockBase.generated.h"

UCLASS()
class BF_GUIBASE_API UIGS_RichTextBlockBase : public URichTextBlock {
    GENERATED_BODY()
public:
    UIGS_RichTextBlockBase();

    UFUNCTION()
    void OnInputDeviceChanged(EIGS_InputDevice inInputDevice);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_InputDevice PreviewInputDevice;
    
};

