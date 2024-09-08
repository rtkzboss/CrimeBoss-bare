#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_GraphStatus.h"
#include "IGS_PlotlineGraphData.h"
#include "META_Interval.h"
#include "META_UniqueCharacterGraphInfo.h"
#include "META_GraphsData.generated.h"

class UMETA_BaseStoryGraphManager;

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_GraphsData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval FirstPlotlineDays;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval SecondPlotlineDays;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval AnyNextPlotlineDays;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> StartedGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_CharacterID, FMETA_UniqueCharacterGraphInfo> CharacterStoryGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIGS_PlotlineGraphData> PlotlineGraphs;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> CrewRandEventsGraph;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> SpecialCrewEventsGraph;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> EntitlementGraphs;
    
public:
    UMETA_GraphsData();

    UFUNCTION(BlueprintCallable)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus> GetStartedGraphs(const TArray<EIGS_CharacterID>& inAvailableUniqueCharacters);
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetSpecialCrewEventsGraph() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetSecondPlotlineDays() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_PlotlineGraphData> GetPlotlineGraphs();
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetFirstPlotlineDays() const;
    
    UFUNCTION(BlueprintPure)
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FGameplayTag> GetEntitlementsGraph() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UMETA_BaseStoryGraphManager> GetCrewRandEventsGraph() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterGraphInfo(EIGS_CharacterID inCharacterID, bool& outFind, FMETA_UniqueCharacterGraphInfo& outGraphInfo);
    
    UFUNCTION(BlueprintPure)
    FMETA_Interval GetAnyNextPlotlineDays() const;
    
};

