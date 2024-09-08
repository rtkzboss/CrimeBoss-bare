#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_DialogueAsyncActionInterface.h"
#include "BTTask_PlayDialogue.generated.h"

UCLASS()
class BF_AI_API UBTTask_PlayDialogue : public UBTTaskNode, public IIGS_DialogueAsyncActionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText DialogueID;
    
public:
    UBTTask_PlayDialogue();


    // Fix for true pure virtual functions not being implemented
};

