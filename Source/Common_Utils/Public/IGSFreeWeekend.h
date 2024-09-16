#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGSFreeWeekend.generated.h"

UCLASS()
class COMMON_UTILS_API UIGSFreeWeekend : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGSFreeWeekend();

    UPROPERTY()
    bool IsFreeWeekend;

    UPROPERTY()
    FString ResponseString;

    UPROPERTY()
    bool IsSystemReady;

    UPROPERTY()
    bool IsEntitlementSystemReady;

    UPROPERTY()
    int32 TotalTriesCount;

    UPROPERTY()
    bool IsProcessingRequest;

};
