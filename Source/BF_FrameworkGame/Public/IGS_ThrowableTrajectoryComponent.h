#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableInventoryObject.h"
#include "Components/SceneComponent.h"
#include "IGS_OnChangeShowPredictionSignature.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableTrajectoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ThrowableTrajectoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_ThrowableTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);

    UFUNCTION(BlueprintCallable)
    void CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnChangeShowPredictionSignature OnChangeShowPrediction;

};
