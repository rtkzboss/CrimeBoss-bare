#include "AfraidOfDanger.h"

FAfraidOfDanger::FAfraidOfDanger() {
    (*this).Actor = nullptr;
    auto gen = TBaseStructure<FGenericTeamId>::Get()->FindPropertyByName("TeamID");
    (*gen->ContainerPtrToValuePtr<uint8>(&(*this).GenericTeamId, 0)) = 255;
    (*this).DamageTypeFlags = 0;
}
