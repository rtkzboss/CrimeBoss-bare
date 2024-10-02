#include "META_CareerStartStuff.h"

FMETA_CareerStartStuff::FMETA_CareerStartStuff() {
    (*this).StartDay = 1;
    (*this).Cash = 0;
    (*this).Weapons = TArray<FMETA_StartupWeaponDefinition>{};
    (*this).Heisters = TArray<EIGS_CharacterID>{};
    (*this).PartnersCash = TMap<EMETA_Partner, int32>{};
    (*this).GangsCash = TMap<EMETA_Gang, int32>{};
    (*this).BalanceLimit.Min = 0;
    (*this).BalanceLimit.Max = 0;
}
