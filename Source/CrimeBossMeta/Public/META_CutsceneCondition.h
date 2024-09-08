#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MediaCondition.h"
#include "META_CutsceneCondition.generated.h"

class UDataAsset;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_CutsceneCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CutsceneID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DebugText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ScreenAfterEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldBeDelayed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ExpireTimerDays;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSoftObjectPtr<UDataAsset> CutsceneDataAsset;
    
private:
    UPROPERTY()
    int32 ExpirationTimerEnabled;
    
public:
    UMETA_CutsceneCondition();

    UFUNCTION(BlueprintPure)
    FText GetCutsceneID();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSoftObjectPtr<UDataAsset> GetCutsceneDataAsset();
    
};

