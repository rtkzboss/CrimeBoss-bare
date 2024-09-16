#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlayerDirectionalCueDefinition.h"
#include "AIBarksManagerBase.h"
#include "PaybackHarmfullBarksManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHarmfullBarksManager : public UAIBarksManagerBase {
    GENERATED_BODY()
public:
    UPaybackHarmfullBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StickyStart(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);

    UFUNCTION(BlueprintImplementableEvent)
    void StickyEndWithoutLOS(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);

    UFUNCTION(BlueprintImplementableEvent)
    void StickyEndWithLOS(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);

    UFUNCTION(BlueprintImplementableEvent)
    void StickyChanged(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);

    UFUNCTION(BlueprintImplementableEvent)
    void StickyArrive(const AIGS_GameCharacterFramework* inInstigator, const AActor* inStickyTarget);

    UFUNCTION(BlueprintImplementableEvent)
    void StealthIdle(const AIGS_GameCharacterFramework* inInstigator);

    UFUNCTION(BlueprintImplementableEvent)
    void ShoutDownRefused(const AIGS_GameCharacterFramework* inCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void PlayerDirectionCue(const AIGS_GameCharacterFramework* inCharacter, const AIGS_GameCharacterFramework* inPlayer, const EIGS_PlayerDirectionalCueDefinition inPlayerDirectionCue);

    UFUNCTION(BlueprintImplementableEvent)
    void DetectionStart(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void DetectionEnd(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void CombatTaunt(const AIGS_GameCharacterFramework* inInstigator, bool hasVisibleTarget);

};
