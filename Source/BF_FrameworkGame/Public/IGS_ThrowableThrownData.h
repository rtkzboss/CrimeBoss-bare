#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_ThrowableThrownData.generated.h"

USTRUCT()
struct FIGS_ThrowableThrownData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float InitialThrowSpeed;
    
    UPROPERTY()
    FVector InitialVelocity;
    
    UPROPERTY()
    FRotator RandomThrowRotation;
    
    UPROPERTY()
    bool bWasThrown;
    
    BF_FRAMEWORKGAME_API FIGS_ThrowableThrownData();
};

