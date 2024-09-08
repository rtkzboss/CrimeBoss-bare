#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SquadHeistersEventWatchComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SquadHeistersEventWatchComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_HittingCharacters;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_FiringCharacters;
    
public:
    UIGS_SquadHeistersEventWatchComponent(const FObjectInitializer& ObjectInitializer);

};

