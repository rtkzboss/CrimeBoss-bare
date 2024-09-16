#pragma once
#include "CoreMinimal.h"
#include "META_CharacterID.h"
#include "META_HeisterSpecialData.h"
#include "META_HeisterStatisticData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterStatisticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_CharacterID HeisterID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_HeisterSpecialData HeisterSpecialData;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Statuses;

    FMETA_HeisterStatisticData();
};
