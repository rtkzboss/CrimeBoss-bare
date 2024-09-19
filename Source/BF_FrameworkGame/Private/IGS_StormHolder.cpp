#include "IGS_StormHolder.h"
#include "UObject/NoExportTypes.h"

FIGS_StormHolder::FIGS_StormHolder() {
    (*this).WaveSize = FInt32Range(FInt32RangeBound::Inclusive(3), FInt32RangeBound::Inclusive(5));
    (*this).WaveSpawnTimer = FFloatRange(FFloatRangeBound::Inclusive(1.500000000e+01f), FFloatRangeBound::Inclusive(1.500000000e+01f));
    (*this).SquadSize = 4;
    (*this).EnemyTypes = 0;
    (*this).SpecialTypesChances = TMap<EIGS_UnitSpecialization, float>{};
}
