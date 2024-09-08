#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WieldableAbstract.generated.h"

UCLASS(Abstract, Config=Inherit)
class PAYBACKDEFINITIONS_API AWieldableAbstract : public AActor {
    GENERATED_BODY()
public:
    AWieldableAbstract(const FObjectInitializer& ObjectInitializer);

};

