#include "IGS_Quickplay_CrewManagerComponent.h"

UIGS_Quickplay_CrewManagerComponent::UIGS_Quickplay_CrewManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_Quickplay_CrewManagerComponent::SetBossPerk(int32 inSlot, FGameplayTag inPerk) {
}

void UIGS_Quickplay_CrewManagerComponent::SetBossItem(FGameplayTag inItemTag, bool inNotify) {
}

void UIGS_Quickplay_CrewManagerComponent::RemoveCharacter(FGameplayTag inCharacterTag) {
}

void UIGS_Quickplay_CrewManagerComponent::RemoveBossItem(FGameplayTag inItemTag) {
}

bool UIGS_Quickplay_CrewManagerComponent::IsCharacterOwned(FGameplayTag inCharacterTag) {
    return false;
}

void UIGS_Quickplay_CrewManagerComponent::InitBoss() {
}

bool UIGS_Quickplay_CrewManagerComponent::HasBossItemEquipped(FGameplayTag inItemTag) const {
    return false;
}

TArray<UMETA_Character*> UIGS_Quickplay_CrewManagerComponent::GetCharactersAndBoss() {
    return {};
}

TArray<UMETA_Character*> UIGS_Quickplay_CrewManagerComponent::GetCharacters() {
    return {};
}

UMETA_Character* UIGS_Quickplay_CrewManagerComponent::GetCharacter(FGameplayTag inCharacterTag) {
    return nullptr;
}

UMETA_BossCharacter* UIGS_Quickplay_CrewManagerComponent::GetBossCharacter() const {
    return nullptr;
}

UMETA_Character* UIGS_Quickplay_CrewManagerComponent::CreateCharacter(FGameplayTag inCharacterTag) {
    return nullptr;
}

void UIGS_Quickplay_CrewManagerComponent::ChooseBossRandomWeapons() {
}

void UIGS_Quickplay_CrewManagerComponent::AddCharacters(FGameplayTagContainer inCharacterTags) {
}

void UIGS_Quickplay_CrewManagerComponent::AddCharacter(FGameplayTag inCharacterTag) {
}

