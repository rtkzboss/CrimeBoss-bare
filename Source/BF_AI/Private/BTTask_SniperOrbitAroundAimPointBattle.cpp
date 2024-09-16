#include "BTTask_SniperOrbitAroundAimPointBattle.h"

UBTTask_SniperOrbitAroundAimPointBattle::UBTTask_SniperOrbitAroundAimPointBattle() {
    (*this).SnipePointKey.AllowedTypes = {nullptr};
    (*this).NodeName = TEXT("Sniper orbit around aim point Battle");
}

