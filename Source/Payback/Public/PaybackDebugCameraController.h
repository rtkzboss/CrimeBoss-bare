#pragma once
#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "PaybackDebugCameraController.generated.h"

UCLASS(Config=Inherit)
class PAYBACK_API APaybackDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
    APaybackDebugCameraController(const FObjectInitializer& ObjectInitializer);

};

