#include "META_HeisterStatisticData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"

FMETA_HeisterStatisticData::FMETA_HeisterStatisticData() {
    (*this).HeisterID.TagID = FGameplayTag();
    (*this).HeisterID.ID = EIGS_CharacterID::Char_Unknown;
    (*this).HeisterID.UniqGenericId = -1;
    (*this).HeisterSpecialData.Name = TEXT("");
    (*this).HeisterSpecialData.Surname = FText::GetEmpty();
    (*this).HeisterSpecialData.HeisterQuality = EMETA_ItemQuality::None;
    (*this).Statuses = 0;
}
