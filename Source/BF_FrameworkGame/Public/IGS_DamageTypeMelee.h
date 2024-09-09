#pragma once
#include "CoreMinimal.h"
#include "IGS_DamageTypeBase.h"
#include "EDamageMeleeType.h"
#include "IGS_DamageTypeMelee.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_DamageTypeMelee : public UIGS_DamageTypeBase {
    GENERATED_BODY()
public:
    UIGS_DamageTypeMelee();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageMeleeType DamageMeleeType;
    
};

