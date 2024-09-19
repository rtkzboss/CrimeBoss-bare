#include "IGS_AmmoBoxTeamRow.h"

FIGS_AmmoBoxTeamRow::FIGS_AmmoBoxTeamRow() {
    (*this).ID = EIGS_TeamSideEnum::TS_Unknown;
    (*this).AmmoBoxClass = nullptr;
    (*this).SpawnDataMap = TMap<uint8, FIGS_AmmoBoxSpawnArray>{};
}
