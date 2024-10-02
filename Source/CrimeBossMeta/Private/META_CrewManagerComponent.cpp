#include "META_CrewManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_CrewManagerComponent::UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMETA_CrewManagerComponent::SetCharacterPlotlineCompleted(FGameplayTag inCharacter) {
}

EIGS_CharacterID UMETA_CrewManagerComponent::SelectCharacterForGenerationFromPool(const TArray<EIGS_CharacterID>& inCharacterPool) const {
    return EIGS_CharacterID::Char_Gen_Start;
}

void UMETA_CrewManagerComponent::SaveCharacterMissionStatus(FGameplayTag inCharacter, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inResult) {
}

void UMETA_CrewManagerComponent::ResetCharacterPlotlineProgressForCharacter(FGameplayTag inCharacter) {
}

void UMETA_CrewManagerComponent::ResetActiveGenericVariants() {
}

void UMETA_CrewManagerComponent::RemoveCharacterFromCampaign(UMETA_Character* inCharacter) {
}

UMETA_Character* UMETA_CrewManagerComponent::MorphUniqueCharacter(UMETA_Character* inOriginalCharacter, const FGameplayTag inNewCharacter, const bool inForceIgnoreLock) {
    return nullptr;
}

bool UMETA_CrewManagerComponent::IsHeisterRemovedFromCampaign(EIGS_CharacterID inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsHeisterExcludedFromCampaign(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterPlotlineCompleted(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterMutuallyExclusiveWithActiveCharacterByTagID(FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterMutuallyExclusiveWithActiveCharacter(const FIGS_CharacterTableRow& inCharacterData, FGameplayTag inCharacterID) const {
    return false;
}

bool UMETA_CrewManagerComponent::IsCharacterFromEntitledDLC(FGameplayTag inCharacterID) const {
    return false;
}

TArray<EIGS_CharacterID> UMETA_CrewManagerComponent::GetUniqueCharactersAvailableForGeneration() const {
    return {};
}

TArray<UMETA_Character*> UMETA_CrewManagerComponent::GetEntitledCharactersToBeAddedForTheFirstTime() {
    return {};
}

void UMETA_CrewManagerComponent::GetCharacterMissionProgressForCharacter(FGameplayTag inCharacter, bool& outFound, FIGS_CharacterMissionProgress& outMissionProgress) const {
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByTagID(FGameplayTag inCharacterTagID, bool inIsTemporary, bool inForceIgnoreLock) {
    return nullptr;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByID(EIGS_CharacterID inCharacterID, bool inIsTemporary, bool inForceIgnoreLock) {
    return nullptr;
}

bool UMETA_CrewManagerComponent::CanUniqueCharacterBeGenerated(FGameplayTag inCharacterID, const AMETA_BaseGameMode* inMetaGameMode, const TArray<UMETA_Character*>& inBlackmarketCharactersPool) const {
    return false;
}

TArray<UMETA_Character*> UMETA_CrewManagerComponent::CalculateStartingHeistersBonus() {
    return {};
}

