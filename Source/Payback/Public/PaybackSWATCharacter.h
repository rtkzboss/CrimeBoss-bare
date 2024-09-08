#pragma once
#include "CoreMinimal.h"
#include "PaybackAICharacter.h"
#include "PaybackSWATCharacter.generated.h"

UCLASS(Config=Inherit)
class PAYBACK_API APaybackSWATCharacter : public APaybackAICharacter {
    GENERATED_BODY()
public:
    APaybackSWATCharacter(const FObjectInitializer& ObjectInitializer);

};

