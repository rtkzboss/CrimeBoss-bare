#include "IGS_UnlockMissionContract.h"

FIGS_UnlockMissionContract::FIGS_UnlockMissionContract() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionID, 0)) = NAME_None;
}
