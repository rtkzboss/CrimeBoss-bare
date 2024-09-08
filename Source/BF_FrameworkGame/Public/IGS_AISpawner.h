#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_AISpawner.generated.h"

class UIGS_AISpawnerData;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AISpawner : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_AISpawnerData* AISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag NoneSpawnAnimTag;
    
    UPROPERTY()
    FGameplayTag StoryMissionTag;
    
    UPROPERTY()
    FGameplayTag UnknownMissionTag;
    
    UPROPERTY()
    FGameplayTag NoSpecialTierTag;
    
    UPROPERTY()
    FGameplayTag ForceSpecialTierTag;
    
    UPROPERTY()
    TArray<UClass*> LoadedPawnClasses;
    
public:
    UIGS_AISpawner();

    UFUNCTION(BlueprintCallable)
    void SpawnUnitFromBlueprint(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, EIGS_UnitSpecialization inUnitSpecialization, FTransform InTransform, int32 inCount, EIGS_SpawnAnimType inSpawnAnim);
    
};

