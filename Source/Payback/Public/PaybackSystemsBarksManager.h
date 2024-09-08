#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "EIGS_StormTacticType.h"
#include "Components/ActorComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "PaybackSystemsBarksManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackSystemsBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackSystemsBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void WaveManagerControlStart(EIGS_StormTacticType inStormTactic);
    
    UFUNCTION(BlueprintImplementableEvent)
    void WaveManagerAssaultStart(EIGS_TeamSideEnum inTeamSideEnum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void WaveManagerAssaultEndingSoon(EIGS_TeamSideEnum inTeamSideEnum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicionManagerMultiKillGuard(const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicionManagerHQFinished(const AActor* inCharacter, bool inWasStrikeAdded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicionManagerHeistStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicionManagerFirstKillGuard(const AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicionManagerAllGuardsDead(const AIGS_GameCharacterFramework* inLastCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SuspicioManagerOnAlarm(EIGS_AlarmReason inReason, const AActor* inOffender);
    
};

