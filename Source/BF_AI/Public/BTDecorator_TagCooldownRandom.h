#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_TagCooldownRandom.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_TagCooldownRandom : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_TagCooldownRandom();

    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    float CooldownDurationMin;
    
    UPROPERTY(EditAnywhere)
    float CooldownDurationMax;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    bool bActivatesCooldown;
    
};

