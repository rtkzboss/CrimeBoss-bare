#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachRemoveObstacle.generated.h"

class AActor;
class AIGS_BreachExplodable;

UCLASS()
class BF_AI_API UIGS_AICommandBreachRemoveObstacle : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandBreachRemoveObstacle();

    UPROPERTY()
    AActor* BreachableObject;

    UPROPERTY()
    AIGS_BreachExplodable* ExplosiveObject;

};
