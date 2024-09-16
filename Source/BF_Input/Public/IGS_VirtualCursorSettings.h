#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Curves/CurveFloat.h"
#include "EIGS_VirtualCursorStick.h"
#include "IGS_CursorWidget.h"
#include "Templates/SubclassOf.h"
#include "IGS_VirtualCursorSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class BF_INPUT_API UIGS_VirtualCursorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_VirtualCursorSettings();

    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve VirtualCursorAccelerationCurve;

    UPROPERTY(Config, EditAnywhere)
    float MaxVirtualCursorSpeed;

    UPROPERTY(Config, EditAnywhere)
    float MaxVirtualCursorSpeedWhenHovering;

    UPROPERTY(Config, EditAnywhere)
    float VirtualCursorDragCoefficient;

    UPROPERTY(Config, EditAnywhere)
    float VirtualCursorDragCoefficientWhenHovering;

    UPROPERTY(Config, EditAnywhere)
    float MinVirtualCursorSpeed;

    UPROPERTY(Config, EditAnywhere)
    float VirtualCursorDeadZone;

    UPROPERTY(Config, EditAnywhere)
    float VirtualCursorAccelerationMultiplier;

    UPROPERTY(Config, EditAnywhere)
    float VirtualCursorSize;

    UPROPERTY(Config, EditAnywhere)
    bool bUseEngineDefaultVirtualCursor;

    UPROPERTY(Config, EditAnywhere)
    bool bVirtualCursorNoAcceleration;

    UPROPERTY(Config, EditAnywhere)
    EIGS_VirtualCursorStick VirtualCursorStick;

    UPROPERTY(Config, EditAnywhere)
    FName VirtualHardwareCursorNormal;

    UPROPERTY(Config, EditAnywhere)
    FName VirtualHardwareCursorHovering;

    UPROPERTY(Config, EditAnywhere)
    FName NativeHardwareCursorNormal;

    UPROPERTY(Config, EditAnywhere)
    FName NativeHardwareCursorHovering;

    UPROPERTY(Config, EditAnywhere)
    FVector2D VirtualHardwareCursorHotspot;

    UPROPERTY(Config, EditAnywhere)
    FVector2D NativeHardwareCursorHotspot;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_CursorWidget> VirtualSoftwareCursorWidgetClass;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_CursorWidget> NativeSoftwareCursorWidgetClass;

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    bool bUseSoftwareCursor;

};
