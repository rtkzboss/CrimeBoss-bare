#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_BotCommandDefinition.h"
#include "EIGS_BotOrderActionSource.h"
#include "IGS_BotOrderPointOfInterest.h"
#include "IGS_BotOrderAction.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

USTRUCT(BlueprintType)
struct FIGS_BotOrderAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EIGS_BotCommandDefinition Type;

    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> Instigator;

    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> Bot;

    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UObject> Object;

    UPROPERTY(BlueprintReadOnly)
    FVector Location;

    UPROPERTY(BlueprintReadOnly)
    bool PathExists;

    UPROPERTY(BlueprintReadOnly)
    TArray<FIGS_BotOrderPointOfInterest> AdditionalPoi;

    UPROPERTY(BlueprintReadOnly)
    EIGS_BotOrderActionSource Source;

    BF_FRAMEWORKGAME_API FIGS_BotOrderAction();
};
