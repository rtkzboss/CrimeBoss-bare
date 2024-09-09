#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_OnGadgetPlacedDelegate.h"
#include "IGS_WaitForGadgetPlacement.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_ItemPlacementBase;
class UIGS_WaitForGadgetPlacement;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForGadgetPlacement : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForGadgetPlacement();

    UFUNCTION(BlueprintCallable)
    static UIGS_WaitForGadgetPlacement* WaitForGadgetPlacement(AIGS_ItemPlacementBase* GadgetActor, bool EnablePlacement);
    
private:
    UFUNCTION()
    void OnItemPlacedInternal(AIGS_ItemPlacementBase* inPlacementActor, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION()
    void OnActionReturnedInternal(AIGS_ItemPlacementBase* inPlacementActor, AIGS_GameCharacterFramework* inInstigator);
    
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnGadgetPlaced OnGadgetPlaced;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnGadgetPlaced OnGadgetFinished;
    
};

