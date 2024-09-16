#include "IGS_HubGeneratorPresetRow.h"

FIGS_HubGeneratorPresetRow::FIGS_HubGeneratorPresetRow() {
    (*this).ScenarioType = EIGS_HubScenarioType::Empty;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ScenarioTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).ScenarioTags, 0)) = {};
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).CompatibleEnvironmentTiles = 0;
    (*this).PresetData = nullptr;
    (*this).bEnabled = false;
    (*this).bDebug = false;
    (*this).WaveDirection = 0;
    (*this).BackdropDirection = 0;
}
