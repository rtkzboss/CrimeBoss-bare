#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PatrolPoint.h"
#include "IGS_IdlePoint.generated.h"

UCLASS(Abstract)
class BF_AI_API AIGS_IdlePoint : public AIGS_PatrolPoint {
    GENERATED_BODY()
public:
    AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinTimeUntilBreaker;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeUntilBreaker;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag IdleAnimationTag;

};
