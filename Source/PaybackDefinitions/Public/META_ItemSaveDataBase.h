#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_ItemSaveDataBase.generated.h"

USTRUCT(BlueprintType)
struct FMETA_ItemSaveDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag itemTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Price;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativePrice;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnseenInShop;

    PAYBACKDEFINITIONS_API FMETA_ItemSaveDataBase();
};
