#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_PlayerSuspicionComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSuspicionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerSuspicionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ShouldFootstepsBeDetectable() const;

protected:
    UFUNCTION()
    void OnMovementModeChanged(ACharacter* inCharacter, TEnumAsByte<EMovementMode> inPrevMovementMode, uint8 inPreviousCustomMode);

public:
    UFUNCTION(BlueprintPure)
    bool HasAnyOffence() const;

    UFUNCTION(BlueprintPure)
    EIGS_RoomSecurityType GetRoomSecurityType() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentWieldableOffences() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentWieldableClass() const;

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetCurrentOffences();

protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagQuery ShouldFootstepsBeDetectableQuery;

};
