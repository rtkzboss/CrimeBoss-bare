#pragma once
#include "CoreMinimal.h"
#include "IGS_BreachPointsBase.h"
#include "IGS_GateBreachPoints.generated.h"

class UIGS_BreachPointComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_GateBreachPoints : public AIGS_BreachPointsBase {
    GENERATED_BODY()
public:
    AIGS_GateBreachPoints(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* StackEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* BreachEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* StackExitPoint;
    
};

