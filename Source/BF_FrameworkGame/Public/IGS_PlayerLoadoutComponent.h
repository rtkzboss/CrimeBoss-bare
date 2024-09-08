#pragma once
#include "CoreMinimal.h"
#include "META_PerkDataToFPS.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_Ability1ChangedDelegate.h"
#include "IGS_LoadoutInitializedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerLoadoutComponent.generated.h"

class AIGS_GameCharacterFramework;
class IIGS_InventoryInterface;
class UIGS_InventoryInterface;
class UGameplayEffect;
class UIGS_EquipmentInventoryObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerLoadoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_LoadoutInitializedSignature OnLoadoutInitializedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_Ability1Changed OnAbility1Changed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsInited;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_EquipmentInventoryObject> CurrentEquipment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGameplayEffect> SubtractChargeGE;
    
    UPROPERTY()
    TScriptInterface<IIGS_InventoryInterface> OwningCharacterInventoryInterface;
    
public:
    UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OverrideAbility1Charges(const int32 inCharges);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_GivePerks(const TArray<FMETA_PerkDataToFPS>& inPerkIDs);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_GiveMPPerks(const TArray<FMETA_PerkDataToFPS>& inPerkIDs);
    
    UFUNCTION()
    void Selfrevive();
    
    UFUNCTION()
    void OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeLoadout();
    
protected:
    UFUNCTION()
    void HandlePlayerDownState();
    
    UFUNCTION(BlueprintPure)
    UIGS_EquipmentInventoryObject* GetCurrentEquipmentObject();
    
    UFUNCTION()
    void ForceDownstateUseAbility();
    
    UFUNCTION(Client, Reliable)
    void Client_SetEquipmentData(float inTimestamp, int32 inCount, int32 inKillCount);
    
};

