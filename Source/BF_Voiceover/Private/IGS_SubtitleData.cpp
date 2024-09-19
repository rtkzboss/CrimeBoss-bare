#include "IGS_SubtitleData.h"

FIGS_SubtitleData::FIGS_SubtitleData() {
    (*this).CharacterName = FText::GetEmpty();
    (*this).CharacterNameColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).SubtitleText = FText::GetEmpty();
    (*this).SubtitleType = EIGS_SubtitleType::None;
    (*this).HeisterNumber = 0;
    (*this).HasMedia = false;
    (*this).IsTTS = false;
}
