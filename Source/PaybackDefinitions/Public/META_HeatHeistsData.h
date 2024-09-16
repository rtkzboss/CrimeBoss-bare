#pragma once
#include "CoreMinimal.h"
#include "EMETA_FPSMissionSubtype.h"
#include "META_HeatHeistsData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeatHeistsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionDoneInStealth;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionFailed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionDoneWithoutStars;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionDoneWith1Star;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionDoneWith2Stars;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionDoneWith3Stars;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ForEvery5PoliceCasualities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PerCivilianCasualty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MakingTheTruceWithEnemyGang;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NoTurfAttackAttamepWhenDayEnds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AnyTurfAttackAttempt;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DetectiveKilled;

    UPROPERTY(EditDefaultsOnly)
    TSet<EMETA_FPSMissionSubtype> FPSSubtypesNotAffectingHeat;

    FMETA_HeatHeistsData();
};
