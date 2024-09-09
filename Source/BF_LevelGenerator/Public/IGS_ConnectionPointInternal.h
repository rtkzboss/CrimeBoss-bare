#pragma once
#include "CoreMinimal.h"
#include "EIGS_Event.h"
#include "IGS_ConnectionPointBase.h"
#include "IGS_ConnectionPointInternal.generated.h"

UCLASS()
class BF_LEVELGENERATOR_API AIGS_ConnectionPointInternal : public AIGS_ConnectionPointBase {
    GENERATED_BODY()
public:
    AIGS_ConnectionPointInternal(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EIGS_Event> Event;
    
};

