#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateBaseWithData.h"
#include "IGS_OnLootBagCountChangedDelegate.h"
#include "IGS_OnPocketLootChangedBPDelegate.h"
#include "IGS_OnSecuredLootAddedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameStateFramework.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_CarryableInventoryObject;
class UIGS_InventoryObjectFramework;
class UObject;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_GameStateFramework : public AIGS_GameStateBaseWithData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSecuredLootAdded OnSecuredLootAdded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSecuredLootAdded OnBonusLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnPocketLootChangedBP OnPocketLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSecuredLootAdded OnBonusPocketLootChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnLootBagCountChanged OnLootBagCountChangedEvent;
    
protected:
    UPROPERTY(Replicated)
    bool mR_PlayersImmortality;
    
    UPROPERTY(ReplicatedUsing=OnRep_PocketLootValue)
    float PocketLootValue;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_BaggedLootValue)
    float BaggedLootValue;
    
    UPROPERTY(ReplicatedUsing=OnRep_SecuredLoot)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PocketLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_BonusPocketLoot)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusPocketLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_CarryablePocketLoot)
    TArray<TSubclassOf<UIGS_CarryableInventoryObject>> CarryablePocketLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_CarryablePickedUpLoot)
    TArray<TSubclassOf<UIGS_CarryableInventoryObject>> CarryablePickedUpLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_SecuredLoot)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> SecuredLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_BonusLoot)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusLoot;
    
    UPROPERTY(ReplicatedUsing=OnRep_LootBagCount)
    int32 LootBagCount;
    
    UPROPERTY(ReplicatedUsing=OnRep_SecuredLootBagCount)
    int32 SecuredLootBagCount;
    
private:
    UPROPERTY()
    bool m_bIsEndMission;
    
public:
    AIGS_GameStateFramework(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsEndMission(const bool inEndMission);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RemoveSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RemovedPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RemoveBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    void RecalculateBaggedLoot();
    
protected:
    UFUNCTION()
    void OnRep_SecuredLootBagCount(int32 inOldCount);
    
    UFUNCTION()
    void OnRep_SecuredLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION()
    void OnRep_PocketLootValue();
    
    UFUNCTION()
    void OnRep_LootBagCount(int32 inOldCount);
    
    UFUNCTION()
    void OnRep_CarryablePocketLoot(TArray<TSubclassOf<UIGS_CarryableInventoryObject>> inOldSecuredLoot);
    
    UFUNCTION()
    void OnRep_CarryablePickedUpLoot(TArray<TSubclassOf<UIGS_CarryableInventoryObject>> inOldSecuredLoot);
    
    UFUNCTION()
    void OnRep_BonusPocketLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION()
    void OnRep_BonusLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot);
    
    UFUNCTION()
    void OnRep_BaggedLootValue(float inOldValue);
    
public:
    UFUNCTION(BlueprintPure)
    float GetSecuredLootWeight() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSecuredLootValue();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSecuredLootBagsCount();
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetSecuredLoot() const;
    
    UFUNCTION(BlueprintPure)
    float GetPocketLootWeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetPocketLootValue() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetPocketLoot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsEndMission() const;
    
    UFUNCTION(BlueprintPure)
    float GetCarryablePocketLootWeight() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_CarryableInventoryObject>> GetCarryablePocketLoot() const;
    
    UFUNCTION(BlueprintPure)
    float GetCarryablePickedUpLootWeight() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_CarryableInventoryObject>> GetCarryablePickedUpLoot() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetBonusPocketLoot() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetBonusLoot() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAllLootCollectedValue();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void CountPocketLootAsSecuredLoot(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    bool ArePlayersImmortal();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSecuredLootBag(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddLootBag(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddCarryablePocketLoot(UObject* inWCO, TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddCarryablePickedUpLoot(UObject* inWCO, TSubclassOf<UIGS_CarryableInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddBonusPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn);
    
};

