#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_AI.generated.h"

class UAISense;
class UIGS_AIDatabaseFPS;
class UIGS_AISpawnPointData;
class UIGS_AISpawnerData;
class UIGS_SquadClassesHolder;
class UIGS_TerritoryData;
class UMaterial;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_AI : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_FrameworkGameDevSettings_AI();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_AISpawnerData> AISpawnerData;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_AIDatabaseFPS> AIDatabaseFPS;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_AISpawnPointData> AISpawnPointData;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UMaterial> AISpawnPointMaterial;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_TerritoryData> TerritoryData;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UIGS_SquadClassesHolder> SquadClassesHolder;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UAISense> ComplexSightClass;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftClassPtr<UAISense> SightClass;

};
