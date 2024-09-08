#pragma once
#include "CoreMinimal.h"
#include "EMETA_BossGangRelationship.generated.h"

UENUM()
enum class EMETA_BossGangRelationship : uint8 {
    Neutral,
    Friendly,
    Unfriendly,
    Hostile,
};

