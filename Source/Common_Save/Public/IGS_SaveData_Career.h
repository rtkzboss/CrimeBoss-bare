#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_SaveData_Base.h"
#include "IGS_SaveData_Version.h"
#include "META_BlackmarketManagerSaveData.h"
#include "META_BossLevelManagerSaveData.h"
#include "META_CareerEndSaveData.h"
#include "META_CityMapManagerSaveData.h"
#include "META_CrewManagerSaveData.h"
#include "META_DailyManagerSaveData.h"
#include "META_EventManagerSaveData.h"
#include "META_FinanceManagerSaveData.h"
#include "META_GoalManagerSaveData.h"
#include "META_HeatManagerSaveData.h"
#include "META_JobManagerSaveData.h"
#include "META_MoneyMakingOpportunitiesSaveData.h"
#include "META_PlanningBoardManagerSaveData.h"
#include "META_RandomEventManagerSaveData.h"
#include "META_StashManagerSaveData.h"
#include "META_StatisticsManagerSaveData.h"
#include "META_WarManagerSaveData.h"
#include "IGS_SaveData_Career.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SaveData_Career : public FIGS_SaveData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString SaveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bIsFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FString CampaignVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BlackmarketManagerSaveData BlackmarketManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_CrewManagerSaveData CrewManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_DailyManagerSaveData DailyManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_StashManagerSaveData StashManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_EventManagerSaveData EventManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_GoalManagerSaveData GoalManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_JobManagerSaveData JobManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_RandomEventManagerSaveData RandomEventManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_CityMapManagerSaveData CityMapManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_WarManagerSaveData WarManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_FinanceManagerSaveData FinanceManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_MoneyMakingOpportunitiesSaveData MoneyMakingOpportunitiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_HeatManagerSaveData HeatManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BossLevelManagerSaveData BossLevelManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_StatisticsManagerSaveData StatisticsManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_PlanningBoardManagerSaveData PlanningBoardManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_CareerEndSaveData CareerEnd;
    
    UPROPERTY(SaveGame)
    FIGS_SaveData_Version SaveDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FGameplayTag> StartingEntitlementTags;
    
    FIGS_SaveData_Career();
};

