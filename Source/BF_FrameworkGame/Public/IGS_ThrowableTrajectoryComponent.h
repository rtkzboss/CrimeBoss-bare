#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_OnChangeShowPredictionSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableTrajectoryComponent.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ThrowableTrajectoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnChangeShowPredictionSignature OnChangeShowPrediction;
    
    UIGS_ThrowableTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    
    UFUNCTION(BlueprintCallable)
    void CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    
};

