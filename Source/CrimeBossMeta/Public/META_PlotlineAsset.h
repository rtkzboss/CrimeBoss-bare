#pragma once
#include "CoreMinimal.h"
#include "META_BaseObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAsset.generated.h"

class UObject;
class UTexture2D;

UCLASS()
class CRIMEBOSSMETA_API UMETA_PlotlineAsset : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_PlotlineAsset();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetInfo(UObject* inWCO, const FGameplayTag& inPlotlineAssetId);

    UFUNCTION(BlueprintCallable)
    void SetAdditionalPricePercent(float inAdditionalPricePercent);

    UFUNCTION(BlueprintPure)
    int32 GetUnlockBossLevel() const;

    UFUNCTION(BlueprintPure)
    int32 GetScore() const;

    UFUNCTION(BlueprintPure)
    int32 GetPrice() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetPreviousVersion() const;

    UFUNCTION(BlueprintPure)
    FText GetName() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetId() const;

    UFUNCTION(BlueprintPure)
    FText GetDescription() const;

    UFUNCTION(BlueprintPure)
    bool GetCanBeLost() const;

    UFUNCTION(BlueprintPure)
    float GetBossPointsMultiplier() const;

    UFUNCTION(BlueprintPure)
    EMETA_PlotlineAssetAvailability GetAvailability() const;

private:
    UPROPERTY()
    int32 m_Price;

    UPROPERTY()
    float m_AdditionalPricePercent;

};
