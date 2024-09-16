#include "IGS_DynamicMaterialHandlerComponent.h"

UIGS_DynamicMaterialHandlerComponent::UIGS_DynamicMaterialHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UMaterialInstanceDynamic* UIGS_DynamicMaterialHandlerComponent::GetDynamicMaterialInstanceFor(UMaterialInterface* inMaterial) {
    return nullptr;
}

void UIGS_DynamicMaterialHandlerComponent::CreateDynamicMaterials(bool inEnableSkinnedDecals) {
}

