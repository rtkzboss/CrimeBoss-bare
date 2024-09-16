#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "BTTask_PlayDialogue.generated.h"

UCLASS()
class BF_AI_API UBTTask_PlayDialogue : public UBTTaskNode, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
    UBTTask_PlayDialogue();

protected:
    UPROPERTY(EditAnywhere)
    FText DialogueID;


    // Fix for true pure virtual functions not being implemented
};
