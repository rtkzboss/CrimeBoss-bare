#include "META_CityMapManagerComponent.h"

UMETA_CityMapManagerComponent::UMETA_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<FGameplayTag> UMETA_CityMapManagerComponent::TryToGetConnectedTiles(const TArray<FGameplayTag> inValidTiles, int32 inTilesAmount) {
    return {};
}

void UMETA_CityMapManagerComponent::GetTileObject_Implementation(const FGameplayTag inID, UMapTile*& outTileObject) {
}

