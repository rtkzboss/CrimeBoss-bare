#include "IGS_AnimClassInfo.h"

FIGS_AnimClassInfo::FIGS_AnimClassInfo() {
    (*this).ID = FSoftObjectPath();
    (*this).ArmsAnimClass = nullptr;
    (*this).CharacterAnimClass = nullptr;
}
