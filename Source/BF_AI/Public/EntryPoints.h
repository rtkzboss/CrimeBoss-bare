#pragma once
#include "CoreMinimal.h"
#include "EntryPoints.generated.h"

class UIGS_BreachPointComponent;

USTRUCT()
struct FEntryPoints {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* LeftNear;
    
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* LeftFar;
    
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* RightNear;
    
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* RightFar;
    
    UPROPERTY(Instanced)
    UIGS_BreachPointComponent* StackPos;
    
    BF_AI_API FEntryPoints();
};

