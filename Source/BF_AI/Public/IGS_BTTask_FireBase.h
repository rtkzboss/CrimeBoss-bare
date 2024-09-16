#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "IGS_BTTask_FireBase.generated.h"

class AActor;
class AIGS_IntelligentGameCharacter;
class AIGS_WeaponBase;

UCLASS(Abstract)
class BF_AI_API UIGS_BTTask_FireBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_FireBase();

protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag AfterFireCooldownTag;

    UPROPERTY(VisibleAnywhere)
    AActor* Target;

    UPROPERTY(VisibleAnywhere)
    AIGS_IntelligentGameCharacter* AIGameCharacter;

    UPROPERTY(VisibleAnywhere)
    int32 DesiredWeaponShootAmmo;

    UPROPERTY(VisibleAnywhere)
    int32 CurrWeaponShootAmmo;

    UPROPERTY(VisibleAnywhere)
    AIGS_WeaponBase* Weapon;

};
