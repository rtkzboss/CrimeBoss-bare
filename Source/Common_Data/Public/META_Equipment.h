#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_EquipmentSaveData.h"
#include "IGS_EquipmentInventoryObject.h"
#include "META_BaseObject.h"
#include "Templates/SubclassOf.h"
#include "META_Equipment.generated.h"

class UMETA_Character;
class UObject;

UCLASS()
class COMMON_DATA_API UMETA_Equipment : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_Equipment();

    UFUNCTION(BlueprintCallable)
    void SetSaveData(FMETA_EquipmentSaveData inSaveData);

    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inNewPrice);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool SetInfoByTag(UObject* inWCO, FGameplayTag inTag);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    bool SetInfo(UObject* inWCO, const TSubclassOf<UIGS_EquipmentInventoryObject>& inEquipmentId);

    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* Character);

    UFUNCTION(BlueprintCallable)
    void SetAdditionalPercentageOfEquipmentPrice(const int32 inAdditionalPercentageOfPrice);

    UFUNCTION(BlueprintCallable)
    void IncreaseAdditionalPercentageOfEquipmentPrice(const int32 inPercentage);

    UFUNCTION(BlueprintPure)
    FMETA_EquipmentSaveData GetSaveData() const;

    UFUNCTION(BlueprintPure)
    int32 GetSalePrice() const;

    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetQuality() const;

    UFUNCTION(BlueprintPure)
    int32 GetPrice() const;

    UFUNCTION(BlueprintPure)
    TSubclassOf<UIGS_EquipmentInventoryObject> GetId() const;

    UFUNCTION(BlueprintPure)
    UMETA_Character* GetCharacter() const;

    UFUNCTION(BlueprintPure)
    int32 GetBasePrice() const;

    UFUNCTION(BlueprintPure)
    int32 GetAdditionalPercentageOfEquipmentPrice() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnseenInShop;

private:
    UPROPERTY()
    int32 m_Price;

    UPROPERTY()
    int32 m_AdditionalPercentageOfEquipmentPrice;

    UPROPERTY()
    UMETA_Character* m_Character;

};
