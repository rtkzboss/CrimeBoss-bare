#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_PickupClassesDataSubsystem.generated.h"

class UIGS_PickupClassesData;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_PickupClassesDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_PickupClassesDataSubsystem();

protected:
    UPROPERTY(VisibleAnywhere)
    UIGS_PickupClassesData* PickupClasses;

};
