#pragma once
#include "CoreMinimal.h"
#include "EIGS_FacialEmotionStates.generated.h"

UENUM(BlueprintType)
enum class EIGS_FacialEmotionStates : uint8 {
    FES_Default UMETA(DisplayName=Default),
    FES_Angry UMETA(DisplayName=Angry),
    FES_Pain UMETA(DisplayName=Pain),
    FES_Surprise UMETA(DisplayName=Surprise),
    FES_Fear UMETA(DisplayName=Fear),
    FES_Happy UMETA(DisplayName=Happy),
    FES_Sad UMETA(DisplayName=Sad),
    FES_Death UMETA(DisplayName=Death),
};
