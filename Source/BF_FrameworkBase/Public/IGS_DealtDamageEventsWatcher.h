#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CharacterDealtDamageSignature.h"
#include "IGS_CharacterKilledSignature.h"
#include "IGS_DealtDamageEventsWatcher.generated.h"

class AIGS_GameCharacterFramework;
class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DealtDamageEventsWatcher : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_DealtDamageEventsWatcher(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UPhysicalMaterial> HeadshotMaterial;

    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterDealtDamageSignature OnCharacterFirstDealtDamageEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterDealtDamageSignature OnCharacterDealtDamageEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_CharacterKilledSignature OnCharacterKilledEvent;

protected:
    UPROPERTY()
    AIGS_GameCharacterFramework* m_OwningCharacter;

};
