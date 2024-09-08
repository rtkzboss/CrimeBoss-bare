#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubScenarioType.generated.h"

UENUM()
enum class EIGS_HubScenarioType : uint8 {
    Empty,
    Ambush,
    ArmoredCarHeist,
    AmbushInstant,
    Escape,
    AttackGangsters,
    Robbery,
    AttackingClub,
    Defense,
    RestaurantAndParty,
    PoliceArrestMember,
    FreeTeamMember,
    WarzoneAttack,
    WarzoneDefense,
    Prologue,
    WIZ04,
};

