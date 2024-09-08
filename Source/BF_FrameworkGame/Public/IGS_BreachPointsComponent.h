#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "IGS_BreachPointsComponent.generated.h"

class ATriggerBase;
class UIGS_BreachPointComponent;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_BreachPointsComponent : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PointsColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATriggerBase> NavModifier;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* BreachingPointsRootComponent;
    
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
    
    AIGS_BreachPointsComponent(const FObjectInitializer& ObjectInitializer);

};

