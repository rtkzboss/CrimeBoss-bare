#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackGuardCharacter.generated.h"

UCLASS(Config=Inherit)
class PAYBACK_API APaybackGuardCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackGuardCharacter(const FObjectInitializer& ObjectInitializer);

};

