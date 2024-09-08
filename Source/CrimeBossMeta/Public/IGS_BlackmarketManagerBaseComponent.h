#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_BlackmarketManangerInitializedDelegate.h"
#include "IGS_BlackmarketManagerBaseComponent.generated.h"

class UMETA_Character;
class UMETA_Equipment;
class UMETA_Weapon;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BlackmarketManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_BlackmarketManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerInitialized;
    
public:
    UIGS_BlackmarketManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Weapon*> GetWeaponsMarketPool() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Weapon* GetWeaponByTagAndSkinTag(FGameplayTag inWeaponTag, FGameplayTag inSkinTag) const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Weapon* GetWeaponByTag(FGameplayTag inWeaponTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipmentMarketPool() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Equipment* GetEquipmentByTag(FGameplayTag inEquipmentTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Character*> GetCharactersMarketPool() const;
    
    UFUNCTION(BlueprintPure)
    UMETA_Character* GetCharacterByTag(FGameplayTag inCharacterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BuyItem(FGameplayTag itemTag, FGameplayTag screenTag, FGameplayTag SkinTag);
    
};

