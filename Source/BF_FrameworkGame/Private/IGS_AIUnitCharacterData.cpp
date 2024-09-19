#include "IGS_AIUnitCharacterData.h"

FIGS_AIUnitCharacterData::FIGS_AIUnitCharacterData() {
    (*this).Controller = FSoftObjectPath();
    (*this).Pawns = TArray<TSoftClassPtr<AIGS_GameCharacterFramework>>{};
}
