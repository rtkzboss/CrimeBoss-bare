#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_BTDecorator_Base.h"
#include "IGS_BTDecorator_IsInSecurityArea.generated.h"

UCLASS()
class BF_AI_API UIGS_BTDecorator_IsInSecurityArea : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EIGS_RoomSecurityType RoomSecurityType;
    
public:
    UIGS_BTDecorator_IsInSecurityArea();

};

