#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AIThreatComponent.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AIMemoryComponent;
class UIGS_CharacterData;
class UIGS_ObjectStatus;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIThreatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIThreatComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(EditInstanceOnly)
    float DmgRequiredToMaxThreat;
    
    UPROPERTY(EditInstanceOnly)
    float ThreathFromFriendsDeath;
    
    UPROPERTY(EditInstanceOnly)
    float ShotNearThreatAddonThreat;
    
    UPROPERTY(EditInstanceOnly)
    float ShotNearDistance;
    
    UPROPERTY(EditInstanceOnly)
    float FullDropTime;
    
    UPROPERTY(VisibleAnywhere)
    float ThreatLevel;
    
    UPROPERTY()
    AIGS_AIControllerGame* m_AIController;
    
    UPROPERTY(Instanced)
    UIGS_AIMemoryComponent* m_AIMemory;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* m_PossessedPawn;
    
    UPROPERTY(Instanced)
    UIGS_ObjectStatus* m_ObjectStatus;
    
    UPROPERTY(Instanced)
    UIGS_CharacterData* m_CharacterData;
    
};

