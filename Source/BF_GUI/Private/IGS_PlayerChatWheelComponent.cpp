#include "IGS_PlayerChatWheelComponent.h"

UIGS_PlayerChatWheelComponent::UIGS_PlayerChatWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SetIsReplicatedByDefault(true);
}

void UIGS_PlayerChatWheelComponent::ShowSpamPreventionMessage() {
}

void UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Implementation(FGameplayTag inTag) {
}
bool UIGS_PlayerChatWheelComponent::Server_HandleChatWheelReaction_Validate(FGameplayTag inTag) {
    return true;
}

void UIGS_PlayerChatWheelComponent::HandleChatWheelReaction(FGameplayTag inTag) {
}

