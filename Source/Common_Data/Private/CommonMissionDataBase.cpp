#include "CommonMissionDataBase.h"

FCommonMissionDataBase::FCommonMissionDataBase() {
    (*this).ID = nullptr;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).MissionTagID, 0)) = NAME_None;
    (*this).Map = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)) = {};
    (*this).MenuCategory = EIGS_MenuCategory::UNKNOWN;
    (*this).Name = FText::GetEmpty();
    (*this).IsHubGeneratorMission = false;
    (*this).DistrictVariant = 0;
    (*this).ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
}
