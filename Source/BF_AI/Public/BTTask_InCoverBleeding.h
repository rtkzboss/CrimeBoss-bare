#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_InCoverBleeding.generated.h"

class AIGS_AIControllerBase;
class AIGS_IntelligentGameCharacter;
class UCoverPoint;
class UIGS_CharacterData;

UCLASS()
class BF_AI_API UBTTask_InCoverBleeding : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UCoverPoint* m_CoverPoint;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_AIControllerBase* m_Controller;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_IntelligentGameCharacter* m_Character;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_CharacterData* m_CharacterData;
    
public:
    UBTTask_InCoverBleeding();

};

