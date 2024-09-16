#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EIGS_WieldableSlot.h"
#include "BFOnIntelUpdated.h"
#include "IGS_PlayerIntelManager.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class AIGS_WieldableBase;
class UIGS_WieldableInventoryObjectBase;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerIntelManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerIntelManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);

public:
    UFUNCTION()
    void OnCharacterKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_PlayerIntelManager* GetPlayerIntelManager(UObject* inWCO);

    UPROPERTY(BlueprintAssignable)
    FBFOnIntelUpdated OnIntelUpdatedEvent;

protected:
    UPROPERTY()
    AIGS_PlayerCharacter* m_CurrentLocalPawn;

public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PlayerWeaponSuccessfulHits;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PlayerWeaponMissedHits;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 KillCount;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CiviliansKillCount;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SecurityKilled;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PolicedKilled;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SwatsKilled;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 GangstersKilled;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float MoneyInInventory;

};
