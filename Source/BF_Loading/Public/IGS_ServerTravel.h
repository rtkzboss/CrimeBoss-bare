#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_LevelTransitionSimpleSignature.h"
#include "IGS_ServerTravel.generated.h"

class UObject;

UCLASS()
class BF_LOADING_API UIGS_ServerTravel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_ServerTravel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_ServerTravel* ServerTravel(UObject* inWCO, FName inLevelName, const FString& inOptions);

protected:
    UFUNCTION()
    void OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel);

    UFUNCTION()
    void OnLevelLoadAttemptSuccess(FName inLevelName, bool inIsServerTravel);

    UFUNCTION()
    void OnLevelLoadAttemptFailure(FName inLevelName, bool inIsServerTravel);

public:
    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptSuccess;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSimpleSignature LevelLoadAttemptFailure;

    UPROPERTY(BlueprintAssignable)
    FIGS_LevelTransitionSimpleSignature LevelLoadStarted;

};
