#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_BlackmarketManagerBaseComponent.h"
#include "IGS_Quickplay_BlackMarketManagerComponent.generated.h"

class UMETA_Character;
class UMETA_CharacterSkin;
class UMETA_Equipment;
class UMETA_Perk;
class UMETA_Weapon;
class UMETA_WeaponSkin;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_BlackMarketManagerComponent : public UIGS_BlackmarketManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_BlackMarketManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void WeaponSkinBuyAnalytics(UMETA_WeaponSkin* inWeaponSkin);

    UFUNCTION(BlueprintImplementableEvent)
    void WeaponBuyAnalytics(UMETA_Weapon* inWeapon);

public:
    UFUNCTION(BlueprintCallable)
    UMETA_Perk* UpgradePerk(UMETA_Perk* inPerk, FGameplayTag inScreenTag);

    UFUNCTION(BlueprintCallable)
    void RemoveItem(FGameplayTag inItemTag);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PerkBuyAnalytics(UMETA_Perk* inPerk);

public:
    UFUNCTION(BlueprintPure)
    bool IsItemInPool(FGameplayTag inItemTag) const;

    UFUNCTION(BlueprintPure)
    bool HasPerkInPool(FGameplayTag inPerkTag) const;

    UFUNCTION(BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsMarketPool() const;

    UFUNCTION(BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const;

    UFUNCTION(BlueprintPure)
    UMETA_WeaponSkin* GetWeaponSkinByTag(FGameplayTag inItemTag) const;

    UFUNCTION(BlueprintPure)
    TArray<UMETA_Perk*> GetPerksMarketPool() const;

    UFUNCTION(BlueprintPure)
    UMETA_Perk* GetPerkByTag(FGameplayTag inItemTag) const;

    UFUNCTION(BlueprintPure)
    TArray<UMETA_CharacterSkin*> GetBossCharacterSkinsMarketPool() const;

    UFUNCTION(BlueprintPure)
    UMETA_CharacterSkin* GetBossCharacterSkinByTag(FGameplayTag inItemTag) const;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EquipmentBuyAnalytics(UMETA_Equipment* inEquipment);

    UFUNCTION(BlueprintImplementableEvent)
    void CharacterBuyAnalytics(UMETA_Character* inCharacter);

    UFUNCTION(BlueprintImplementableEvent)
    void BossCharacterSkinBuyAnalytics(UMETA_CharacterSkin* inBossCharacterSkin);

public:
    UFUNCTION(BlueprintCallable)
    void AddItemToPool(FGameplayTag inItemTag);

    UFUNCTION(BlueprintCallable)
    void AddItemsToPool(FGameplayTagContainer inItemTags);

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Character*> CharactersPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Weapon*> WeaponsPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Equipment*> EquipmentPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Perk*> PerksPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_CharacterSkin*> BossCharacterSkinsPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_WeaponSkin*> WeaponSkinsPool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;

};
