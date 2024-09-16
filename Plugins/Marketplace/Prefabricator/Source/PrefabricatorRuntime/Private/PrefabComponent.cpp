#include "PrefabComponent.h"

UPrefabComponent::UPrefabComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrefabAssetInterface = FSoftObjectPath();
}

