#include "IGS_AICaptainSpecDef.h"
#include "IGS_AICaptainSpecData.h"

FIGS_AICaptainSpecDef::FIGS_AICaptainSpecDef() {
    (*this).DollarDragon.Captains = TArray<FIGS_AICaptainSpecData>{};
    (*this).Hielo.Captains = TArray<FIGS_AICaptainSpecData>{};
    (*this).KarolKhan.Captains = TArray<FIGS_AICaptainSpecData>{};
    (*this).Cagnali.Captains = TArray<FIGS_AICaptainSpecData>{};
    (*this).LawEnforcement.Captains = TArray<FIGS_AICaptainSpecData>{};
    (*this).Friendlies.Captains = TArray<FIGS_AICaptainSpecData>{};
}
