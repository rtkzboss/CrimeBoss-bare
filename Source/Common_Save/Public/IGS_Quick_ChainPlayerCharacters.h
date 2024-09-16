#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "GameFramework/OnlineReplStructs.h"
#include "IGS_Quick_ChainPlayerCharacters.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_ChainPlayerCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    int32 PlayerId;

    UPROPERTY(BlueprintReadWrite, SaveGame)
    FUniqueNetIdRepl UniquePlayerId;

    UPROPERTY(BlueprintReadWrite, SaveGame)
    TArray<FCommonHeisterData> Heisters;

    FIGS_Quick_ChainPlayerCharacters();
};
