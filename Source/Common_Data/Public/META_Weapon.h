#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_InventorySlot.h"
#include "EIGS_WeaponSubtype.h"
#include "EMETA_ItemQuality.h"
#include "IGS_MeleeWeaponTableRow.h"
#include "IGS_WeaponTableRow.h"
#include "META_BaseObject.h"
#include "Templates/SubclassOf.h"
#include "META_Weapon.generated.h"

class UIGS_WeaponSkinData;
class UMETA_Character;
class UMETA_WeaponInventoryObject;
class UObject;
class UTexture2D;

UCLASS()
class COMMON_DATA_API UMETA_Weapon : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnseenInShop;
    
private:
    UPROPERTY()
    int32 m_Price;
    
    UPROPERTY()
    int32 m_AdditionalPercentageOfWeaponPrice;
    
    UPROPERTY()
    int32 m_AdditionalPercentageOfWeaponPriceFromMods;
    
    UPROPERTY()
    UMETA_Character* m_Character;
    
    UPROPERTY()
    int32 m_SuccessfulMissions;
    
    UPROPERTY()
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> m_TargetWeaponsForUpgrade;
    
    UPROPERTY()
    EMETA_ItemQuality m_TargetQualityToUpdateWeapon;
    
    UPROPERTY()
    int32 m_DaysInShop;
    
    UPROPERTY()
    FGameplayTag m_WeaponSkinTag;
    
public:
    UMETA_Weapon();

    UFUNCTION(BlueprintCallable)
    void SetWeaponSkin(FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool SetRandomWeaponSkin(UObject* inWCO, const TArray<FGameplayTag>& inUnlockedWeaponSkinTagIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inNewPrice);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool SetInfoByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool SetInfo(UObject* inWCO, const TSubclassOf<UMETA_WeaponInventoryObject>& inWeaponId);
    
    UFUNCTION(BlueprintCallable)
    void SetDaysInShop(int32 DaysInShop);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPriceFromMods(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfWeaponPrice(int32 inAdditionalPercentageOfPrice);
    
    UFUNCTION(BlueprintPure)
    void IsSignatureWeapon(bool& outSignature, EIGS_CharacterID& outSignatureCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool IsMeleeWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseDaysInShopByOne();
    
    UFUNCTION(BlueprintPure)
    FIGS_WeaponTableRow GetWeaponTableRow() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_WeaponSubtype GetWeaponSubtype() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    TSoftObjectPtr<UIGS_WeaponSkinData> GetWeaponSkinAsset(UObject* inWCO) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetWeaponSkin() const;
    
    UFUNCTION(BlueprintPure)
    float GetUpgradeCostMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUpgradeCost() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UMETA_WeaponInventoryObject>> GetTargetWeaponsForUpgrade() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetTargetQualityToUpdateWeapon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSuccessfulMissions() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSalePrice() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetQuality() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_MeleeWeaponTableRow GetMeleeWeaponTableRow() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_InventorySlot GetInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_WeaponInventoryObject> GetId() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDaysInShop() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    FGameplayTagContainer GetCompatibleWeaponSkins(UObject* inWCO, const TArray<FGameplayTag>& inUnlockedWeaponSkinTagIDs);
    
    UFUNCTION(BlueprintPure)
    UMETA_Character* GetCharacter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBasePrice() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAdditionalPercentageOfWeaponPriceFromMods();
    
    UFUNCTION(BlueprintPure)
    int32 GetAdditionalPercentageOfWeaponPrice() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void FillTargetWeaponsForUpgrade(UObject* inWCO, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSuccessfulMissions(int32 inChangedBy);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetWeaponForUpgrade(TSubclassOf<UMETA_WeaponInventoryObject> inNewTargerWeapon);
    
};

