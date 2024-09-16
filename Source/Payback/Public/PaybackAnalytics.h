#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PaybackAnalytics.generated.h"

class UObject;

UCLASS(BlueprintType)
class PAYBACK_API UPaybackAnalytics : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPaybackAnalytics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ReportMissionFinishedToAnalytics(UObject* inWCO, ECommonMissionResult Result);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void LobbyStarted(UObject* inWCO, const FString& lobbySource);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void LobbyFinished(UObject* inWCO, const FString& resultText);

};
