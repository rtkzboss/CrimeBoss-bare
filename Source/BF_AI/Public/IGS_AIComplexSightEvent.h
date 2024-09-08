#pragma once
#include "CoreMinimal.h"
#include "IGS_AIComplexSightEvent.generated.h"

class AActor;

USTRUCT()
struct BF_AI_API FIGS_AIComplexSightEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SeenActor;
    
    UPROPERTY()
    AActor* Observer;
    
    FIGS_AIComplexSightEvent();
};

