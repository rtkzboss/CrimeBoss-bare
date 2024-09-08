#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_CrewManagerBaseComponent.h"
#include "IGS_Quickplay_CrewManagerComponent.generated.h"

class UMETA_BossCharacter;
class UMETA_Character;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_CrewManagerComponent : public UIGS_CrewManagerBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnBossItemsChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_OnBossItemsChanged OnBossItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_Character*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_BossCharacter* BossCharacter;
    
public:
    UIGS_Quickplay_CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBossPerk(int32 inSlot, FGameplayTag inPerk);
    
    UFUNCTION(BlueprintCallable)
    void SetBossItem(FGameplayTag inItemTag, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBossItem(FGameplayTag inItemTag);
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterOwned(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void InitBoss();
    
    UFUNCTION(BlueprintPure)
    bool HasBossItemEquipped(FGameplayTag inItemTag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Character*> GetCharactersAndBoss();
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_Character*> GetCharacters();
    
    UFUNCTION(BlueprintPure)
    UMETA_Character* GetCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintPure)
    UMETA_BossCharacter* GetBossCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    UMETA_Character* CreateCharacter(FGameplayTag inCharacterTag);
    
    UFUNCTION(BlueprintCallable)
    void ChooseBossRandomWeapons();
    
    UFUNCTION(BlueprintCallable)
    void AddCharacters(FGameplayTagContainer inCharacterTags);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacter(FGameplayTag inCharacterTag);
    
};

