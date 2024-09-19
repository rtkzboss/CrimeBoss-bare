#include "IGS_AnimIntermediaryLinker.h"

FIGS_AnimIntermediaryLinker::FIGS_AnimIntermediaryLinker() {
    (*this).m_LinkedGraphs = TArray<FIGS_LinkedGraphDefinition>{};
    (*this).m_LoadedClasses = TArray<UClass*>{};
}
