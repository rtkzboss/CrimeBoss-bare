#pragma once
#include "CoreMinimal.h"
#include "EMETA_RandEventReward.generated.h"

UENUM()
enum class EMETA_RandEventReward : uint8 {
    None,
    Money,
    Loot,
    Soldiers,
    Heister,
    HeatChange,
    PoliceInvestigationStateChange,
    GangTurfNeutralization,
    ConquerGangTerritory,
    GangStopsAttackingPLayer,
    GangStopsAnyAttacks,
    TradeAttitudeChange,
    BetterLootPricesInStash,
    WorseLootPricesInStash,
};

