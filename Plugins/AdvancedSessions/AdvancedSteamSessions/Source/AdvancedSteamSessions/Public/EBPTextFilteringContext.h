#pragma once
#include "CoreMinimal.h"
#include "EBPTextFilteringContext.generated.h"

UENUM()
enum class EBPTextFilteringContext : uint8 {
    FContext_Unknown,
    FContext_GameContent,
    FContext_Chat,
    FContext_Name,
};

