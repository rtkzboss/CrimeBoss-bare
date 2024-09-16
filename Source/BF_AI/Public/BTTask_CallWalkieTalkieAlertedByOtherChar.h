#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_CallWalkieTalkieBase.h"
#include "BTTask_CallWalkieTalkieAlertedByOtherChar.generated.h"

class UIGS_AISuspiciousnessComponentBase;

UCLASS()
class BF_AI_API UBTTask_CallWalkieTalkieAlertedByOtherChar : public UBTTask_CallWalkieTalkieBase {
    GENERATED_BODY()
public:
    UBTTask_CallWalkieTalkieAlertedByOtherChar();

protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OffenceDataKey;

    UPROPERTY(Instanced)
    UIGS_AISuspiciousnessComponentBase* m_SusComp;

};
