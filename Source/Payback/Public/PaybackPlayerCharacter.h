#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerCharacter.h"
#include "PaybackPlayerCharacter.generated.h"

class UIGS_NetworkComponentAnimation;
class UIGS_NetworkComponentCharacter;

UCLASS()
class PAYBACK_API APaybackPlayerCharacter : public AIGS_PlayerCharacter {
    GENERATED_BODY()
public:
    APaybackPlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NetworkComponentAnimation* NetworkAnimation;
    
};

