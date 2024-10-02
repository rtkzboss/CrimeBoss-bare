#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BlackmarketPriorityModifiers.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BlackmarketPriorityModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NotEquipped;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NotOwned;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 WasGeneratedPreviously;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EntitlementItem;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> PerItemID;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> PerWeaponClass;

    FMETA_BlackmarketPriorityModifiers();
};
