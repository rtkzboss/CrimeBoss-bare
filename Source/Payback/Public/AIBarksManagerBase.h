#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "AIBarksManagerBase.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AIDirector;
class UIGS_SuspicionManager;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UAIBarksManagerBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatTauntsCooldownPerChar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatTauntsCooldownGlobal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CombatTauntsDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StealthIdleCooldownPerChar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StealthIdleCooldownGlobal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StealthIdleDistance;
    
    UPROPERTY()
    TArray<EIGS_TeamSideEnum> TeamSides;
    
    UPROPERTY()
    UIGS_AIDirector* m_AIDirector;
    
    UPROPERTY()
    TMap<AIGS_GameCharacterFramework*, float> CharacterCooldown;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> TMPCharacters;
    
    UPROPERTY(Instanced)
    UIGS_SuspicionManager* m_SuspicionManager;
    
public:
    UAIBarksManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReportStealthIdleDialogue(AIGS_GameCharacterFramework* inCharacterFramework, FText inDialogue);
    
};

