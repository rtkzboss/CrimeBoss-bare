#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneralReactionData_Base.generated.h"

UCLASS(BlueprintType)
class BF_AI_API UIGS_GeneralReactionData_Base : public UObject {
    GENERATED_BODY()
public:
    UIGS_GeneralReactionData_Base();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;

};
