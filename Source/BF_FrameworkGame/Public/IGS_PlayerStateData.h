#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_StorePlatform.h"
#include "IGS_PlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FCommonHeisterData HeisterDataHolder;

    UPROPERTY(BlueprintReadOnly)
    EIGS_StorePlatform StorePlatform;

    UPROPERTY(BlueprintReadWrite)
    int32 HordeModeTokens;

    FIGS_PlayerStateData();
};
