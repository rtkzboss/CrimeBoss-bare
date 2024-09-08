#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputDevice.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/RichTextBlockDecorator.h"
#include "Templates/SubclassOf.h"
#include "IGS_RichTextBlockDecoratorBase.generated.h"

class UIGS_InputActionMapDataAsset;
class UIGS_InputDeviceIconsDataAsset;
class UUserWidget;

UCLASS(BlueprintType)
class BF_GUIBASE_API UIGS_RichTextBlockDecoratorBase : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_InputActionMapDataAsset* InputActionMapAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_InputDeviceIconsDataAsset* InputKeyIconMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EIGS_InputDevice> SupportedInputDevices;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo IconFont;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo FallbackIconFont;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> WidgetToSpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGamepadDecorator;
    
    UIGS_RichTextBlockDecoratorBase();

};

