#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_ComparableItemData.h"
#include "META_BaseObject.generated.h"

class UTexture2D;

UCLASS(Abstract)
class COMMON_DATA_API UMETA_BaseObject : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UMETA_BaseObject();

    UFUNCTION(BlueprintCallable)
    void SetTagID(FGameplayTag inTag);

    UFUNCTION(BlueprintCallable)
    void SetRelativeItemPrice(const float inRelativePrice);

    UFUNCTION(BlueprintCallable)
    void SetItemPrice(const int32 inItemCost);

    UFUNCTION(BlueprintCallable)
    void SetIcon(TSoftObjectPtr<UTexture2D> inIcon);

    UFUNCTION(BlueprintCallable)
    void SetEntitlementTagID(FGameplayTag inTag);

    UFUNCTION(BlueprintPure)
    FGameplayTag GetTagID() const;

    UFUNCTION(BlueprintPure)
    float GetRelativeItemPrice() const;

    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetItemQuality() const;

    UFUNCTION(BlueprintPure)
    int32 GetItemPrice() const;

    UFUNCTION(BlueprintPure)
    FText GetItemName() const;

    UFUNCTION(BlueprintPure)
    FText GetItemDescription() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon();

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEntitlementTagID() const;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag itemTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ItemCost;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeItemPrice;

};
