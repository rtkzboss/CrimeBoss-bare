#include "IGS_TerritoryVolumeManager.h"
#include "IGS_TerritoryData.h"

UIGS_TerritoryVolumeManager::UIGS_TerritoryVolumeManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_TerritoryData> gen(TEXT("/Game/00_Main/Core/AI/Spawning/DA_TerritoryData.DA_TerritoryData"));
    (*this).TerritoryData = gen.Object;
}

void UIGS_TerritoryVolumeManager::RemoveRestrictionTag(const FName& inTag) {
}

void UIGS_TerritoryVolumeManager::OnTerritoryVolumeEndOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const {
}

void UIGS_TerritoryVolumeManager::OnTerritoryVolumeBeginOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const {
}

TArray<FName> UIGS_TerritoryVolumeManager::GetRestrictionTags() const {
    return {};
}

TArray<FName> UIGS_TerritoryVolumeManager::GetRestrictedTags() const {
    return {};
}

void UIGS_TerritoryVolumeManager::AddRestrictionTag(const FName& inTag) {
}

