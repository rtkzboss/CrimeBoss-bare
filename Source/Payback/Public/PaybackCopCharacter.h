#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackCopCharacter.generated.h"

UCLASS(Config=Inherit)
class PAYBACK_API APaybackCopCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackCopCharacter(const FObjectInitializer& ObjectInitializer);

};

