#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPVArmsAbstract.generated.h"

UCLASS(Abstract, Config=Inherit)
class PAYBACKDEFINITIONS_API AFPVArmsAbstract : public AActor {
    GENERATED_BODY()
public:
    AFPVArmsAbstract(const FObjectInitializer& ObjectInitializer);

};

