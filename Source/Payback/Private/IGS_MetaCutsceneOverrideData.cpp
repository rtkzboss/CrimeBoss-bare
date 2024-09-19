#include "IGS_MetaCutsceneOverrideData.h"

FIGS_MetaCutsceneOverrideData::FIGS_MetaCutsceneOverrideData() {
    (*this).OverrideSlotCharacterPaperDolls = TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>>{};
}
