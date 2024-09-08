#pragma once
#include "CoreMinimal.h"
#include "IGS_GeneralReactionData_Base.h"
#include "IGS_GeneralReactionData_Actor.generated.h"

class AActor;

UCLASS()
class BF_AI_API UIGS_GeneralReactionData_Actor : public UIGS_GeneralReactionData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    UIGS_GeneralReactionData_Actor();

};

