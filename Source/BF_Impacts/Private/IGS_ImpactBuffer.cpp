#include "IGS_ImpactBuffer.h"

FIGS_ImpactBuffer::FIGS_ImpactBuffer() {
    (*this).Impacts = TArray<AIGS_ImpactBase*>{};
    (*this).ImpactClass = nullptr;
}
