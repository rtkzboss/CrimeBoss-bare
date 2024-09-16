#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_ManageGASTags.generated.h"

UCLASS()
class BF_AI_API UBTTask_ManageGASTags : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_ManageGASTags();

    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequiredTags;

    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoredTags;

    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RemovedTags;

    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AddedTags;

};
