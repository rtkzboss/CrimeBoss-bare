#include "IGS_SharedMetaTransfer_Data.h"

FIGS_SharedMetaTransfer_Data::FIGS_SharedMetaTransfer_Data() {
    (*this).MissionID.A = 0;
    (*this).MissionID.B = 0;
    (*this).MissionID.C = 0;
    (*this).MissionID.D = 0;
    (*this).Heisters = {};
    (*this).Detectives = {};
    (*this).PlayedPresets.PlayedPresets = {};
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Easy;
    (*this).LobbyVisibility = EMETA_LobbyVisibilityType::Private;
    (*this).MPLobbyType = EIGS_MPLobbyType::Normal;
}
