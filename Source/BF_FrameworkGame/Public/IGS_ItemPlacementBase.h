#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnGadgetPlaced.h"
#include "IGS_ItemPlacementBase.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ItemPlacementBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ItemPlacementBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void EnablePlacement(bool inEnable);

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnGadgetPlaced OnGadgetPlaced;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnGadgetPlaced OnGadgetFinished;

};
