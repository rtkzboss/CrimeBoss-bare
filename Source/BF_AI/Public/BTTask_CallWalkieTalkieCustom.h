#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTTask_CallWalkieTalkieBase.h"
#include "BTTask_CallWalkieTalkieCustom.generated.h"

UCLASS()
class BF_AI_API UBTTask_CallWalkieTalkieCustom : public UBTTask_CallWalkieTalkieBase {
    GENERATED_BODY()
public:
    UBTTask_CallWalkieTalkieCustom();

protected:
    UPROPERTY(EditAnywhere)
    int32 StrikesToAdd;

    UPROPERTY(EditAnywhere)
    FGameplayTag BlameTag;

    UPROPERTY(EditAnywhere)
    FText DialogueID;

};
