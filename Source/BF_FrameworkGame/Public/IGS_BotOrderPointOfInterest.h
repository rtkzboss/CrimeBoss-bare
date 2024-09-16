#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BotOrderPointOfInterest.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIGS_BotOrderPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UObject> Object;

    UPROPERTY(BlueprintReadOnly)
    FVector Location;

    UPROPERTY(BlueprintReadOnly)
    bool PathExists;

    BF_FRAMEWORKGAME_API FIGS_BotOrderPointOfInterest();
};
