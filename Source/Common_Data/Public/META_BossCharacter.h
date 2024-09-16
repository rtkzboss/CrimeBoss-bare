#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_Character.h"
#include "META_PerkData.h"
#include "META_BossCharacter.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_BossCharacter : public UMETA_Character {
    GENERATED_BODY()
public:
    UMETA_BossCharacter();

    UFUNCTION(BlueprintCallable)
    void SetPerkInSlot(int32 inSlot, FGameplayTag inTagID);

    UFUNCTION(BlueprintCallable)
    void SetCharacterSkinTag(FGameplayTag inSkinTag);

    UFUNCTION(BlueprintPure)
    int32 GetSlotByPerkTag(FGameplayTag inTagID) const;

    UFUNCTION(BlueprintPure)
    FMETA_PerkData GetPerkInSlot(int32 inSlot) const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEquippedSecondaryWeaponID() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEquippedPrimaryWeaponID() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetCharacterSkinTag() const;

};
