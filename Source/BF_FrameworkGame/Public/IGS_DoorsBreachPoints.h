#pragma once
#include "CoreMinimal.h"
#include "IGS_BreachPointsBase.h"
#include "IGS_DoorsBreachPoints.generated.h"

class UIGS_BreachPointComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_DoorsBreachPoints : public AIGS_BreachPointsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeftNearEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeftFarEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* MiddleEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* RightNearEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* RightFarEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeftNearExitPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* LeftFarExitPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* MiddleExitPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* RightNearExitPoint;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreachPointComponent* RightFarExitPoint;
    
    AIGS_DoorsBreachPoints(const FObjectInitializer& ObjectInitializer);

};

