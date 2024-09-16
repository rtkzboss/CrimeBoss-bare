#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_MissingHeisterEventData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_MissingHeisterEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysLeftUntilEvent;

    FMETA_MissingHeisterEventData();
};
