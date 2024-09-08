#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaybackMenuLevelActor.generated.h"

UCLASS(Config=Inherit)
class PAYBACKDEFINITIONS_API APaybackMenuLevelActor : public AActor {
    GENERATED_BODY()
public:
    APaybackMenuLevelActor(const FObjectInitializer& ObjectInitializer);

};

