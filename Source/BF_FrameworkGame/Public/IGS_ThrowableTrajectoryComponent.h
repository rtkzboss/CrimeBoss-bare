#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_OnChangeShowPredictionSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableTrajectoryComponent.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ThrowableTrajectoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnChangeShowPredictionSignature OnChangeShowPrediction;
    
    UIGS_ThrowableTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    
    UFUNCTION(BlueprintCallable)
    void CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    
};

