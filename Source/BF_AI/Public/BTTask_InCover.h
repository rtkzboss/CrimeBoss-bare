#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_InCover.generated.h"

class AIGS_AIControllerGame;
class AIGS_IntelligentGameCharacter;
class UCoverPoint;
class UIGS_AIMemoryComponent;
class UIGS_AIThreatComponent;
class UIGS_CharacterData;
class UIGS_GameCharacterMovementComponent;

UCLASS()
class BF_AI_API UBTTask_InCover : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CoverForwardPointKey;
    
    UPROPERTY(EditAnywhere)
    float RotationDelay;
    
    UPROPERTY(VisibleAnywhere)
    UCoverPoint* m_CoverPoint;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_AIControllerGame* m_Controller;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_IntelligentGameCharacter* m_Character;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_AIMemoryComponent* m_Memory;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_AIThreatComponent* m_Threath;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_CharacterData* m_CharacterData;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_GameCharacterMovementComponent* m_MovementComponent;
    
public:
    UBTTask_InCover();

};

