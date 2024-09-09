#pragma once
#include "CoreMinimal.h"
#include "IGS_HasWeakSpotInterface.h"
#include "PaybackAICharacter.h"
#include "PaybackShielderCharacter.generated.h"

class UIGS_WeakSpotComponent;

UCLASS()
class PAYBACK_API APaybackShielderCharacter : public APaybackAICharacter, public IIGS_HasWeakSpotInterface {
    GENERATED_BODY()
public:
    APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(Instanced)
    UIGS_WeakSpotComponent* m_WeakSpotComponent;
    

    // Fix for true pure virtual functions not being implemented
};

