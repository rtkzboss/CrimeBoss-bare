#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingMissionMainDataFromDatabase.generated.h"

USTRUCT(BlueprintType)
struct FMETA_MoneyMakingMissionMainDataFromDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag UnlockTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl UnlockRespectLvl;

    PAYBACKDEFINITIONS_API FMETA_MoneyMakingMissionMainDataFromDatabase();
};
