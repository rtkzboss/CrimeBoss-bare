#include "META_GraphStructSave.h"

FMETA_GraphStructSave::FMETA_GraphStructSave() {
    (*this).Graph = FSoftObjectPath();
    (*this).Status = EMETA_GraphStatus::Deactive;
    (*this).CurrentNodeIds = TArray<int32>{};
}
