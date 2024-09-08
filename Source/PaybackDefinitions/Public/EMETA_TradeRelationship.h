#pragma once
#include "CoreMinimal.h"
#include "EMETA_TradeRelationship.generated.h"

UENUM()
enum class EMETA_TradeRelationship : uint8 {
    UNDEFINED,
    Good,
    Neutral,
    Bad,
    Hostile,
};

