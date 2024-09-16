#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "META_CampaignModeMapping.h"
#include "META_PlotlineSelectionMapping.generated.h"

class UMETA_PlotlineSelection;

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_PlotlineSelectionMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UMETA_PlotlineSelectionMapping();

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_PlotlineSelection> GetDefaultCampaignMode() const;

protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UMETA_PlotlineSelection> DefaultCampaignMode;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, TSoftObjectPtr<UMETA_PlotlineSelection>> CampaignModesMapping;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMETA_CampaignModeMapping> CampaignModeMappings;

};
