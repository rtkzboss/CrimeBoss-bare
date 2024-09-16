#include "CustomizableSkeletalComponent.h"

UCustomizableSkeletalComponent::UCustomizableSkeletalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate) {
}

