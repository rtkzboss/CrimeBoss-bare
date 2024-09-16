#pragma once
#include "CoreMinimal.h"
#include "EIGS_Event.h"
#include "IGS_IntelBase.h"
#include "IGS_EventIntel.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UIGS_EventIntel : public UIGS_IntelBase {
    GENERATED_BODY()
public:
    UIGS_EventIntel();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_Event EventType;

};
