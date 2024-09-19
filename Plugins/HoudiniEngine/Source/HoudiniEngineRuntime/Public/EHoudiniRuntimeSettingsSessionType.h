#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRuntimeSettingsSessionType.generated.h"

UENUM(BlueprintType)
enum EHoudiniRuntimeSettingsSessionType {
    HRSST_InProcess UMETA(DisplayName="In Process"),
    HRSST_Socket UMETA(DisplayName=Socket),
    HRSST_NamedPipe UMETA(DisplayName="Named Pipe"),
    HRSST_None UMETA(DisplayName=None),
};
