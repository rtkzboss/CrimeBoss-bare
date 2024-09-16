#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "META_MissionID.h"
#include "Templates/SubclassOf.h"
#include "META_BMActiveEventLootData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_BMActiveEventLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_TradeVendor Vendor;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinLootValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;

    PAYBACKDEFINITIONS_API FMETA_BMActiveEventLootData();
};
