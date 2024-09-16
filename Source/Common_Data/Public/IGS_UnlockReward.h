#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_RewardType.h"
#include "IGS_UnlockCharacter.h"
#include "IGS_UnlockMissionContract.h"
#include "IGS_UnlockReward.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_UnlockReward : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_RewardType Type;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UnlockTip;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockCharacter CharacterData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockMissionContract MissionContractData;

    FIGS_UnlockReward();
};
