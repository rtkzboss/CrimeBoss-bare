#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_ObjectiveComponentType.h"
#include "EIGS_ObjectiveState.h"
#include "IGS_ObjectiveComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ObjectiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ObjectiveComponentType ObjectiveComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTimerObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_ObjectiveState TaskState;
    
private:
    UPROPERTY()
    int32 CurrentCount;
    
public:
    UIGS_ObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTaskState(EIGS_ObjectiveState inState, bool inForceMissionTaskStateChange);
    
    UFUNCTION(BlueprintCallable)
    void SetCount(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCount();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCount();
    
    UFUNCTION(BlueprintCallable)
    void ClearCount();
    
};

