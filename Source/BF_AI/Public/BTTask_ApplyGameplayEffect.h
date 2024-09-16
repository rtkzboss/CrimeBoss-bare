#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffect.h"
#include "EIGS_GameplayEffectTarget.h"
#include "Templates/SubclassOf.h"
#include "BTTask_ApplyGameplayEffect.generated.h"

UCLASS()
class BF_AI_API UBTTask_ApplyGameplayEffect : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ApplyGameplayEffect();

    UPROPERTY(EditAnywhere)
    EIGS_GameplayEffectTarget Target;

    UPROPERTY(EditAnywhere)
    FFloatInterval Duration;

    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> GameplayEffect;

};
