#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "IGS_LevelSequenceActorBase.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_LevelSequenceActorBase : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AIGS_LevelSequenceActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSequenceToLastFrame();

    UFUNCTION(BlueprintCallable)
    void PlaySequence();

    UFUNCTION()
    void OnSequenceFinished();

private:
    UFUNCTION()
    void OnRep_SequenceStarted();

    UFUNCTION()
    void OnRep_SequenceFinished();

    UPROPERTY(ReplicatedUsing=OnRep_SequenceStarted)
    bool mbR_SequenceStarted;

    UPROPERTY(ReplicatedUsing=OnRep_SequenceFinished)
    bool mbR_SequenceFinished;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
