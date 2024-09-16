#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EMETA_JobResult.h"
#include "META_CinematicMissionRowInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CinematicMissionRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CutsceneID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DebugText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Picture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MapIconOverride;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysOnMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCrewSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCrewSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> CharactersRequired;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> CharactersRequiredButNotOwned;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMETA_JobResult> ResultsWhenJobIsNotRemovedFromTheMap;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubDistrict DistrictType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HubBackdropTypes BackdropType;

    FMETA_CinematicMissionRowInfo();
};
