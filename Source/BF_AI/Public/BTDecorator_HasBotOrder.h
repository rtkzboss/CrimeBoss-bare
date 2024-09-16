#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_HasBotOrder.generated.h"

UCLASS()
class BF_AI_API UBTDecorator_HasBotOrder : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UBTDecorator_HasBotOrder();

    UPROPERTY(EditAnywhere)
    TSet<EIGS_BotCommandDefinition> ExcludedTypes;

};
