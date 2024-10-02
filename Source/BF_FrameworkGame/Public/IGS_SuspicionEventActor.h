#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_SuspicionEventActor.generated.h"

class AActor;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SuspicionEventActor : public AIGS_SuspicionActorBase, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    AIGS_SuspicionEventActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnAttachedToActorReleased(TScriptInterface<IIGS_PoolableInterface> inReleasedActor);

    UFUNCTION()
    void OnAttachedToActorDestroyed(AActor* inDestroyedActor);


    // Fix for true pure virtual functions not being implemented
};
