#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "IGS_BreachPointsBase.generated.h"

class ATriggerBase;
class USceneComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_BreachPointsBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_BreachPointsBase(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PointsColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATriggerBase> NavModifier;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* BreachingPointsRootComponent;
    
};

