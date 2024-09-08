#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_CustomShooter.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CustomShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
    UIGS_CustomShooter(const FObjectInitializer& ObjectInitializer);

};

