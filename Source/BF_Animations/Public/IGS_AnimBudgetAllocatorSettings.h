#pragma once
#include "CoreMinimal.h"
#include "AnimationBudgetAllocatorParameters.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AnimBudgetAllocatorSettings.generated.h"

UCLASS(BlueprintType)
class BF_ANIMATIONS_API UIGS_AnimBudgetAllocatorSettings : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinimumSignificance;
    
    UPROPERTY(EditAnywhere)
    float MaximumSignificance;
    
    UPROPERTY(EditAnywhere)
    float PauseAnimSignificanceThreshold;
    
    UIGS_AnimBudgetAllocatorSettings();

    UFUNCTION(BlueprintCallable)
    void SetParameters(const FAnimationBudgetAllocatorParameters& inParameters);
    
};

