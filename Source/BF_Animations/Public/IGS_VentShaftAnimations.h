#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_VentShaftAnimations.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS()
class BF_ANIMATIONS_API UIGS_VentShaftAnimations : public UObject {
    GENERATED_BODY()
public:
    UIGS_VentShaftAnimations();

private:
    UPROPERTY(Transient)
    AIGS_IntelligentGameCharacter* m_Character;
    
};

