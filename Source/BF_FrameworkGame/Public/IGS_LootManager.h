#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_OnAllCollectedLootSecuredDelegate.h"
#include "IGS_OnAllLootCollectedDelegate.h"
#include "IGS_OnAllowedLootChangedDelegate.h"
#include "IGS_OnHalfNeededLootCollectedDelegate.h"
#include "IGS_OnHalfNeededLootSecuredDelegate.h"
#include "IGS_OnHeisterItemAddedDelegate.h"
#include "IGS_OnLootCollectionRegisteredDelegate.h"
#include "IGS_OnNeededLootCollectedDelegate.h"
#include "IGS_OnNeededLootSecuredDelegate.h"
#include "IGS_OnSecuredBonusLootChangedDelegate.h"
#include "IGS_OnSecuredLootChangedDelegate.h"
#include "IGS_OnStartCollectionBonusLootDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_LootCollectionBase;
class UIGS_CarryableInventoryObject;
class UIGS_InventoryObjectFramework;
class UIGS_LootItemInventoryObject;
class UIGS_LootManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnHeisterItemAdded OnHeisterItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnHeisterItemAdded OnHeisterItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnLootCollectionRegistered OnLootCollectionRegistered;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_LootCollectionBase*> LootCollections;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSecuredLootChanged OnSecuredLootChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnSecuredBonusLootChanged OnSecuredBonusLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnAllowedLootChanged OnAllowedLootChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnHalfNeededLootCollected OnHalfNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnNeededLootCollected OnNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnStartCollectionBonusLoot OnStartCollectionBonusLoot;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAllLootCollected OnAllLootCollected;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnHalfNeededLootSecured OnHalfLootSecured;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnNeededLootSecured OnAllneededLootSecured;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnAllCollectedLootSecured OnAllCollectedLootSecured;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalValueSpawned;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalLootValueSpawned;
    
    UPROPERTY(BlueprintReadOnly)
    float TotalMoneyValueSpawned;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float TotalObjectiveValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float NeededObjectiveWeight;
    
    UPROPERTY(BlueprintReadWrite)
    float AllSpawnedLootWeight;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SecuredLoot)
    float SecuredLootValue;
    
    UPROPERTY(BlueprintReadOnly)
    float SecuredOldLootValue;
    
    UPROPERTY(BlueprintReadOnly)
    float SecuredLootWeight;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SecuredBonusLoot)
    float SecuredBonusLootValue;
    
    UPROPERTY(BlueprintReadOnly)
    float SecuredOldBonusLootValue;
    
    UPROPERTY(BlueprintReadOnly)
    float BonusWeightFromRequiredLoot;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayTag, float> SecuredLootByTag;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayTag, float> SecuredBonusLootByTag;
    
    UPROPERTY(BlueprintReadOnly)
    float SecuredObjectiveLootWeight;
    
    UPROPERTY(BlueprintReadOnly)
    float SecuredBonusLootWeight;
    
    UPROPERTY()
    bool bDisableLootVoiceLines;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGameplayTag> AllowedLoot;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float LootWeightMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_LootItemInventoryObject> DummyLootItem;
    
private:
    UPROPERTY()
    TArray<AActor*> SpecialSpawners;
    
    UPROPERTY()
    bool bHasShownError;
    
public:
    UIGS_LootManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float UpdateLootWeightMultiplier(UObject* inWCO);
    
    UFUNCTION()
    TMap<FGameplayTag, float> SortLootByTag(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionBagsInWeight(int32 inRequiredBags);
    
    UFUNCTION()
    void SendNewValueToHeisterData(AIGS_GameCharacterFramework* inOwningPawn, float inValueToAdd, bool inIsBonus) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectedLoot();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootItem(TSubclassOf<UIGS_LootItemInventoryObject> inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootCollection(AIGS_LootCollectionBase* inLootCollection);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootCarryable(TSubclassOf<UIGS_CarryableInventoryObject> inCarryable);
    
    UFUNCTION()
    void OnRep_SecuredLoot(float inOldSecuredLootValue);
    
    UFUNCTION()
    void OnRep_SecuredBonusLoot(float inOldSecuredBonusLootValue);
    
    UFUNCTION()
    void OnPocketLootWeightChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveLootCollected();
    
    UFUNCTION(BlueprintCallable)
    float GetValuePercentage(float InValue);
    
    UFUNCTION(BlueprintPure)
    float GetThrowableItemSize(EIGS_LootSize inWeight) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_LootManager* GetLootManager(const UObject* inWCO);
    
    UFUNCTION()
    float GetItemValueFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION()
    FGameplayTag GetItemTypeFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintPure)
    float GetItemSize(EIGS_ItemWeight inWeight) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMissionBagsInWeight(int32 inRequiredBags);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void DisableLootVoiceLines(UObject* inWCO, bool bDisable);
    
    UFUNCTION()
    float CalculateSpecialLootItemValue(FGameplayTag inItemTag, float inItemWeight);
    
    UFUNCTION()
    void CalculateNewLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION()
    void CalculateNewBonusLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION()
    float CalculateLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION()
    float CalculateBonusLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem);
    
};

