#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_ChargedShooter.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ChargedShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChargeDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DischargeAfter;
    
public:
    UIGS_ChargedShooter(const FObjectInitializer& ObjectInitializer);

};

