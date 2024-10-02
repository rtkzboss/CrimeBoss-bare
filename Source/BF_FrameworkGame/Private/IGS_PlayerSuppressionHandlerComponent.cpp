#include "IGS_PlayerSuppressionHandlerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_PlayerSuppressionHandlerComponent::UIGS_PlayerSuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DirectionalCueCooldown = 1.000000000e+01f;
    (*this).DirectionalMeleeCueRange = 1.500000000e+03f;
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).PrimaryComponentTick.bTickEvenWhenPaused = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).SetIsReplicatedByDefault(true);
}

void UIGS_PlayerSuppressionHandlerComponent::PlayWhizSound() const {
}

void UIGS_PlayerSuppressionHandlerComponent::PlayDirectionalPlayerCue_Client_Implementation(const AIGS_GameCharacterBase* inSourceCharacter, const EIGS_DirectionalCueType inType) const {
}

