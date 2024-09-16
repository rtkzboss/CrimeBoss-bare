#pragma once
#include "CoreMinimal.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "META_CareerEndSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_CareerEndSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsPending;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bChallengeRewardGenerated;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bRewardsClaimed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_CareerCompletionReason Reason;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EMETA_Gang BossKilledBy;

    FMETA_CareerEndSaveData();
};
