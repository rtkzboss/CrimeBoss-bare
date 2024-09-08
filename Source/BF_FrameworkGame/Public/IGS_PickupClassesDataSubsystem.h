#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_PickupClassesDataSubsystem.generated.h"

class UIGS_PickupClassesData;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_PickupClassesDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UIGS_PickupClassesData* PickupClasses;
    
public:
    UIGS_PickupClassesDataSubsystem();

};

