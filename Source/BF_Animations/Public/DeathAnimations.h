#pragma once
#include "CoreMinimal.h"
#include "DeathAnimations.generated.h"

class UAnimSequence;

USTRUCT()
struct FDeathAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> DeathFront;

    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> DeathBack;

    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> DeathLeft;

    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> DeatRight;

    BF_ANIMATIONS_API FDeathAnimations();
};
