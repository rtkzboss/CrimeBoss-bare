#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_StashManagerBaseComponent.h"
#include "IGS_Quickplay_StashManagerComponent.generated.h"

class UMETA_BaseObject;
class UMETA_CharacterSkin;
class UMETA_Equipment;
class UMETA_Perk;
class UMETA_Weapon;
class UMETA_WeaponSkin;

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_StashManagerComponent : public UIGS_StashManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Weapon*> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Weapon*> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_WeaponSkin*> WeaponSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Equipment*> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Perk*> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_CharacterSkin*> BossCharacterSkins;
    
public:
    UIGS_Quickplay_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponSkin(UMETA_Weapon* inWeapon, FGameplayTag inSkinTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItems(FGameplayTagContainer inItemTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponSubvariant(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemOwned(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_WeaponSkin*> GetWeaponSkins() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_WeaponSkin* GetWeaponSkinByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Weapon*> GetWeapons() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Weapon* GetWeaponByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Weapon*> GetSecondaryWeapons() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Weapon*> GetPrimaryWeapons() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Perk*> GetPerks() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Perk* GetPerkByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    UMETA_BaseObject* GetItemByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Equipment* GetEquipmentByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipment() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_CharacterSkin*> GetBossCharacterSkins() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_CharacterSkin* GetBossCharacterSkinByTag(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItems(FGameplayTagContainer inItemTags);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(FGameplayTag inItem);
    
};

