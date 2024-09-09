#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_OnLoadingFinishedDynamicSignatureDelegate.h"
#include "IGS_LoadingInProgressManager.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_LoadingInProgressManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_LoadingInProgressManager();

    UPROPERTY(BlueprintAssignable)
    FIGS_OnLoadingFinishedDynamicSignature OnLoadingFinishedEvent;
    
};

