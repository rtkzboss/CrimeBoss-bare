#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_WeaponInventoryObject.h"
#include "Templates/SubclassOf.h"
#include "META_TurfWarMissionRewards.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TurfWarMissionRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag LootType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LootAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MoneyAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoldiersAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> Weapons;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isFilledIn;

    FMETA_TurfWarMissionRewards();
};
