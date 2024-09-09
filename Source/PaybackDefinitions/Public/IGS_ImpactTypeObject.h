#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_WoundType.h"
#include "IGS_ImpactTypeObject.generated.h"

class UAkSwitchValue;

UCLASS(Abstract)
class PAYBACKDEFINITIONS_API UIGS_ImpactTypeObject : public UObject {
    GENERATED_BODY()
public:
    UIGS_ImpactTypeObject();

    UPROPERTY(EditAnywhere)
    UAkSwitchValue* SwitchValue;
    
    UPROPERTY(EditAnywhere)
    bool bShouldSpawnBloodImpacts;
    
    UPROPERTY(EditAnywhere)
    EIGS_WoundType WoundType;
    
};

