#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_BotCommandDefinition.h"
#include "EIGS_BotOrderActionSource.h"
#include "EIGS_BotOrderResult.h"
#include "IGS_BotOrderAction.h"
#include "IGS_BotOrderGenericDelegateDelegate.h"
#include "IGS_BotOrderManagerBase.generated.h"

class AIGS_GameCharacterFramework;
class UObject;

UCLASS(Abstract, BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_BotOrderManagerBase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_BotOrderManagerBase();

    UFUNCTION(BlueprintPure)
    EIGS_BotOrderResult GetLastGetBestActionForResult() const;
    
    UFUNCTION(BlueprintCallable)
    FIGS_BotOrderAction GetBestActionFor(UPARAM(Ref) AIGS_GameCharacterFramework*& inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation, const EIGS_BotOrderActionSource inSource);
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_BotOrderAction> GetActions(UPARAM(Ref) AIGS_GameCharacterFramework*& inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject);
    
    UFUNCTION(BlueprintCallable)
    bool DoActions(const TArray<FIGS_BotOrderAction>& inActions, const bool inAllMustSucceed);
    
    UFUNCTION(BlueprintCallable)
    bool DoAction(UPARAM(Ref) FIGS_BotOrderAction& InAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static TArray<FIGS_BotOrderAction> CreateBotOrderActions(const UObject* inWCO, const EIGS_BotCommandDefinition inType, AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_BotOrderAction CreateBotOrderAction(const UObject* inWCO, const EIGS_BotCommandDefinition inType, AIGS_GameCharacterFramework* inInstigator, const AIGS_GameCharacterFramework* inBot, UObject* inObject, const FVector InLocation);
    
    UPROPERTY(BlueprintAssignable)
    FIGS_BotOrderGenericDelegate OnBotOrderStarted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_BotOrderGenericDelegate OnBotOrderEnded;
    
};

