#include "IGS_NewsInfoRelatedSaveData.h"

FIGS_NewsInfoRelatedSaveData::FIGS_NewsInfoRelatedSaveData() {
    (*this).PatchNotesVersionsSeen = TMap<FString, bool>{};
}
