#pragma once
#include "CoreMinimal.h"
#include "IGS_IdleChatterEventNotificationData.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_IdleChatterEventNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* AsyncRequest;

    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> Characters;

    FIGS_IdleChatterEventNotificationData();
};
