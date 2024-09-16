#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_StormHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_StormHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInt32Range WaveSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFloatRange WaveSpawnTimer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SquadSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnemyTypes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_UnitSpecialization, float> SpecialTypesChances;

    BF_FRAMEWORKGAME_API FIGS_StormHolder();
};
