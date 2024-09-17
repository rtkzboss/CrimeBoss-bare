#include "CommonMissionDataBase.h"

FCommonMissionDataBase::FCommonMissionDataBase() {
    (*this).ID = nullptr;
    (*this).MissionTagID = FGameplayTag();
    (*this).Map = NAME_None;
    (*this).Scenarios = FGameplayTagContainer();
    (*this).MenuCategory = EIGS_MenuCategory::UNKNOWN;
    (*this).Name = FText::GetEmpty();
    (*this).IsHubGeneratorMission = false;
    (*this).DistrictVariant = 0;
    (*this).ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
}
