#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ControlRigBase.generated.h"

class UControlRig;

UCLASS()
class BF_ANIMATIONS_API UIGS_ControlRigBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UControlRig* ControlRig;
    
    UIGS_ControlRigBase();

};

