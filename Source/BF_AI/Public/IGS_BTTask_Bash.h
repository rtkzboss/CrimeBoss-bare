#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_Bash.generated.h"

class AIGS_IntelligentGameCharacter;
class AIGS_WeaponBase;

UCLASS()
class BF_AI_API UIGS_BTTask_Bash : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_Bash();

protected:
    UPROPERTY(VisibleAnywhere)
    AIGS_IntelligentGameCharacter* AIGameCharacter;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_WeaponBase* Weapon;
    
};

