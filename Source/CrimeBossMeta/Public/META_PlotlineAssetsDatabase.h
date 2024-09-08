#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAssetTableRow.h"
#include "META_PlotlineAssetsDatabase.generated.h"

class UMETA_PlotlineAsset;
class UTexture2D;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_PlotlineAssetsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_PlotlineAssetsDatabase();

    UFUNCTION(BlueprintCallable)
    static TArray<UMETA_PlotlineAsset*> SortAssetsByPrice(TArray<UMETA_PlotlineAsset*> inAssets, bool inAscending);
    
    UFUNCTION(BlueprintPure)
    bool IsPersistent(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUnlockBossLevel(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScore(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetPreviousVersion(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetNextTier(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    FText GetName(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    FMETA_PlotlineAssetTableRow GetEventInfo(FGameplayTag inAssetID, bool& outSuccess) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanBeLost(FGameplayTag inAssetID, bool& outSuccess) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanBeBought(FGameplayTag inAssetID, FGameplayTag& outPriceTag) const;
    
    UFUNCTION(BlueprintPure)
    float GetBossPointMultiplier(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    EMETA_PlotlineAssetAvailability GetAvailability(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetAssetsTags() const;
    
};

