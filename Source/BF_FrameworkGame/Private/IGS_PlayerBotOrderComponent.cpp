#include "IGS_PlayerBotOrderComponent.h"

UIGS_PlayerBotOrderComponent::UIGS_PlayerBotOrderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

