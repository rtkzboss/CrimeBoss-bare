#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_AttackMelee.generated.h"

class AIGS_IntelligentGameCharacter;
class AIGS_MeleeWeaponBase;

UCLASS()
class BF_AI_API UIGS_BTTask_AttackMelee : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_AttackMelee();

protected:
    UPROPERTY(VisibleAnywhere)
    AIGS_IntelligentGameCharacter* AIGameCharacter;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_MeleeWeaponBase* Weapon;
    
};

