#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_InventorySlot.h"
#include "EMETA_ChangedHeisterAttribute.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"
#include "META_ChangedHeisterAttributeInfo.h"
#include "META_CharacterID.h"
#include "CommonHeisterData.h"
#include "IGS_ChainLoadout.h"
#include "META_BaseObject.h"
#include "META_CharacterInfo.h"
#include "META_HeisterLoadout.h"
#include "META_PerkData.h"
#include "META_Character.generated.h"

class UMETA_Equipment;
class UMETA_Weapon;
class UObject;

UCLASS()
class COMMON_DATA_API UMETA_Character : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_Character();

    UFUNCTION(BlueprintCallable)
    void UpdateDataByNewDay();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponToItsSlot(UMETA_Weapon* inWeapon, UMETA_Weapon*& outPreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponsCostCoefficient(float inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariable(FGameplayTag inAttribute, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedForQP(bool inUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EMETA_CharacterState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetPerks(TArray<FMETA_PerkData> inPerks);
    
    UFUNCTION(BlueprintCallable)
    void SetMood(EMETA_CharacterMood inMood);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLeveled(bool inMaxLeveled);
    
    UFUNCTION(BlueprintCallable)
    void SetLostReviveCount(int32 inInjuries);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutAsChainLoadout();
    
    UFUNCTION(BlueprintCallable)
    void SetIsUnseenInShop(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTemporary(bool inNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(const FMETA_CharacterInfo& inCharacterInfo, bool bLoadData);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMissionPlayedCountReadyForPromote();
    
    UFUNCTION(BlueprintCallable)
    void SetChainLoadout(FIGS_ChainLoadout inChainLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseUpkeepCost(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseMissionCutPercent(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHireCost(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountOfJobsWhichCanBeCompletedToday(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAbility1Charges(int32 inCharges);
    
    UFUNCTION(BlueprintCallable)
    bool SelectEquipment(UMETA_Equipment* inCurrentEquipment);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVariable(FGameplayTag inAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTrait(FGameplayTag inTrait);
    
    UFUNCTION(BlueprintPure)
    bool IsThereWeaponInSlot(EIGS_InventorySlot inSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTemporary() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMaxLeveled() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementTimesHealed();
    
    UFUNCTION(BlueprintCallable)
    bool IncreaseLevel();
    
    UFUNCTION(BlueprintPure)
    UMETA_Weapon* GetWeaponInSlot(EIGS_InventorySlot inSlot) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, int32> GetVariables() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpkeepCostWithModifiers();
    
    UFUNCTION(BlueprintPure)
    bool GetUnlockedForQP() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetTraits() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimesHealed();
    
    UFUNCTION(BlueprintPure)
    FText GetSurname() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_CharacterState GetState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetReviveCount() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetQualityTier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_PerkData> GetPerks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMutableIndex();
    
    UFUNCTION(BlueprintPure)
    EMETA_CharacterMood GetMood() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionWasPlayed() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionCutPercentWithModifiers();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    int32 GetMaxLevel(UObject* inWCO) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLostReviveCount() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_HeisterLoadout GetLoadoutReference();
    
    UFUNCTION(BlueprintPure)
    FMETA_HeisterLoadout GetLoadout() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsUnseenInShop() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_CharacterInfo GetInfo() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_CharacterID GetId() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHireCost();
    
    UFUNCTION(BlueprintPure)
    int32 GetGenericVariantID();
    
    UFUNCTION(BlueprintPure)
    FText GetFullName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetFirstName() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentAmountOfJobsWhichCanBeCompletedToday() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FCommonHeisterData GetCommonHeisterData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterPromoteProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterPreviousPromoteProgress();
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseUpkeepCost() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseMissionCutPercent();
    
    UFUNCTION(BlueprintPure)
    float GetBaseLevelUpMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseHireCost() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagQuery GetAllowedWiedables() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAditionalReviveCount() const;
    
    UFUNCTION(BlueprintCallable)
    float GetActiveHeisterAttributeMultiplier(EMETA_ChangedHeisterAttribute inAttribute);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAbility1Charges();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCurrentAmountOfJobsWhichCanBeCompletedToday(int32 inDecreasingValue, int32& outCurrentValue);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* ClearEquipment();
    
    UFUNCTION(BlueprintCallable)
    void ClearAndReturnWeaponFromSlot(EIGS_InventorySlot inSlot, UMETA_Weapon*& outWeapon, UMETA_Equipment*& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterLoadout ClearAndReturnLoadout();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMissionWasPlayedByValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHeisterAttributeWithinDays(FMETA_ChangedHeisterAttributeInfo inNewInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CanCharacterBePromoted();
    
    UFUNCTION(BlueprintCallable)
    bool AddTrait(FGameplayTag inTrait);
    
    UFUNCTION(BlueprintCallable)
    void AddPerk(const FMETA_PerkData inPerk);
    
protected:
    UPROPERTY()
    FMETA_CharacterInfo m_CharacterInfo;
    
};

