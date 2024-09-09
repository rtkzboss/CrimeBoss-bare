#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_ChargedShooter.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ChargedShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
    UIGS_ChargedShooter(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChargeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DischargeAfter;
    
};

