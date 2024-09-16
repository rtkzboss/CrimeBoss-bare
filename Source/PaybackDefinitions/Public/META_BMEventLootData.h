#pragma once
#include "CoreMinimal.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_BMEventLootData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_BMEventLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinLootValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;

    PAYBACKDEFINITIONS_API FMETA_BMEventLootData();
};
