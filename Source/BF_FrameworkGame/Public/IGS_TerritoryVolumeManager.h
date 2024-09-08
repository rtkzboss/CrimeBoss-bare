#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_TerritoryVolumeType.h"
#include "IGS_TerritoryVolumeManager.generated.h"

class AActor;
class AIGS_TerritoryVolume;
class AVolume;
class UIGS_TerritoryData;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_TerritoryVolumeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UIGS_TerritoryData* TerritoryData;
    
private:
    UPROPERTY()
    TArray<AIGS_TerritoryVolume*> m_TerritoryVolumes;
    
public:
    UIGS_TerritoryVolumeManager();

    UFUNCTION(BlueprintCallable)
    void RemoveRestrictionTag(const FName& inTag);
    
protected:
    UFUNCTION()
    void OnTerritoryVolumeEndOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const;
    
    UFUNCTION()
    void OnTerritoryVolumeBeginOverlap(AVolume* inOverlappedActorVolume, EIGS_TerritoryVolumeType EnvironmentType, AActor* inOtherActor) const;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FName> GetRestrictionTags() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetRestrictedTags() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRestrictionTag(const FName& inTag);
    
};

