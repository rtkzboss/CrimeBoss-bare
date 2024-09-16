#pragma once
#include "CoreMinimal.h"
#include "IGS_TPP_Mutable_Speed_Animaitons.generated.h"

USTRUCT(BlueprintType)
struct FIGS_TPP_Mutable_Speed_Animaitons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UClass* Animation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Speed;

    BF_ANIMATIONS_API FIGS_TPP_Mutable_Speed_Animaitons();
};
