#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct FIGS_BotOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AIGS_GameCharacterFramework* Character;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnterTime;

    BF_AI_API FIGS_BotOrderData();
};
