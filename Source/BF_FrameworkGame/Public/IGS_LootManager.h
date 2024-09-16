#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"
#include "IGS_CarryableInventoryObject.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_LootItemInventoryObject.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_OnAllCollectedLootSecured.h"
#include "IGS_OnAllLootCollected.h"
#include "IGS_OnAllowedLootChanged.h"
#include "IGS_OnHalfNeededLootCollected.h"
#include "IGS_OnHalfNeededLootSecured.h"
#include "IGS_OnHeisterItemAdded.h"
#include "IGS_OnLootCollectionRegistered.h"
#include "IGS_OnNeededLootCollected.h"
#include "IGS_OnNeededLootSecured.h"
#include "IGS_OnSecuredBonusLootChanged.h"
#include "IGS_OnSecuredLootChanged.h"
#include "IGS_OnStartCollectionBonusLoot.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_LootCollectionBase;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_LootManager(const FObjectInitializer& ObjectInitializer);

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
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
