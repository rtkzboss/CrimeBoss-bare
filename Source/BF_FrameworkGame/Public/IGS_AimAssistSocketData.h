#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AimAssistSocketData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AimAssistSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector Offset;

    FIGS_AimAssistSocketData();
};
