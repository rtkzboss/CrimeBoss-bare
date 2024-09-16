#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_Heat.h"
#include "EMETA_ItemQuality.h"
#include "EMETA_RespectLvl.h"
#include "META_SaveData_DebugCareer.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_SaveData_DebugCareer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsFilled;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> Plotlines;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool DisablePlotlines;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<EIGS_CharacterID> CrewIds;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<EMETA_ItemQuality> CrewQualities;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> Loot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Day;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Cash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_RespectLvl Respect;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 StartTiles;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ArmySize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_Heat HeatState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 PoliceInvestigationValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FGameplayTag, int32> GraphVariables;

    FMETA_SaveData_DebugCareer();
};
