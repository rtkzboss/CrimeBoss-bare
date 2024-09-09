#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_LevelTransitionSimpleSignatureDelegate.h"
#include "IGS_OpenLevel.generated.h"

class UIGS_OpenLevel;
class UObject;

UCLASS()
class BF_LOADING_API UIGS_OpenLevel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_OpenLevel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_OpenLevel* OpenLevel(UObject* inWCO, FName inLevelName, bool inAbsolute, const FString& inOptions);
    
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

