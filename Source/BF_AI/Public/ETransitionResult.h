#pragma once
#include "CoreMinimal.h"
#include "ETransitionResult.generated.h"

UENUM(BlueprintType)
enum ETransitionResult {
    TR_None UMETA(DisplayName=None),
    TR_Success UMETA(DisplayName=Success),
    TR_Failed UMETA(DisplayName=Failed),
};
