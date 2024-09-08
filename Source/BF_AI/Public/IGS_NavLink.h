#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkBase.h"
#include "IGS_NavLink.generated.h"

class UIGS_NavLinkComponentBase;

UCLASS()
class BF_AI_API AIGS_NavLink : public AIGS_NavLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_NavLinkComponentBase* LinkComponent;
    
    AIGS_NavLink(const FObjectInitializer& ObjectInitializer);

};

