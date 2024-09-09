#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_HubBackdropTypes.h"
#include "EIGS_HubDistrict.h"
#include "EMETA_Gang.h"
#include "EMETA_TileSize.h"
#include "EMETA_TileType.h"
#include "EMETA_TileWealth.h"
#include "META_BossEliminationRewardData.h"
#include "META_DetectiveInfo.h"
#include "META_TileRewardData.h"
#include "EMETA_MapDisplayMode.h"
#include "MapTileRow.h"
#include "OnConquestStateChangedDelegateDelegate.h"
#include "OnDetectivesChangedDelegateDelegate.h"
#include "OnDisplayModeChangedDelegateDelegate.h"
#include "OnGangChangedDelegateDelegate.h"
#include "OnMissionAddedDelegateDelegate.h"
#include "OnMissionRemovedDelegateDelegate.h"
#include "OnMissionsChangedDelegateDelegate.h"
#include "OnToggleHighglightedDelegateDelegate.h"
#include "OnToggleIconSelectedDelegateDelegate.h"
#include "OnToggleSelectedDelegateDelegate.h"
#include "OnTypeChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "MapTile.generated.h"

class UMETA_BaseMission;
class UMETA_DetectiveID;
class UMETA_MissionID;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMapTile : public UObject {
    GENERATED_BODY()
public:
    UMapTile();

    UFUNCTION(BlueprintCallable)
    void ToggleTurfIconSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void ToggleIconSelected(bool inSelected, UMETA_BaseMission* inMissionID);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHighlighted(bool inHighlighted);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaknessLowerTier(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaknessExpirationInDays(int32 inDays);
    
    UFUNCTION(BlueprintCallable)
    void SetType(EMETA_TileType inType);
    
    UFUNCTION(BlueprintCallable)
    void SetTurfWarData(int32 inMinAmountOfSoldiersForAttack, int32 inMinAmountOfSoldiersForDefence);
    
    UFUNCTION(BlueprintCallable)
    void SetTileWealth(EMETA_TileWealth InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRawCaptureRewards(TArray<FMETA_TileRewardData> inRewards);
    
    UFUNCTION(BlueprintCallable)
    void SetMissions(TArray<UMETA_BaseMission*> inMissions);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomeValueMultiplier(float inValueMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomeLoot(FGameplayTag inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void SetGang(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayMode(EMETA_MapDisplayMode inDisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectives(TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> inDetectives);
    
    UFUNCTION(BlueprintCallable)
    void SetData(FMapTileRow inTileRow);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeakness(int32 inWeakness);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStrength(int32 inCurrentStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetCountdownAfterLost(int32 inCountdown);
    
    UFUNCTION(BlueprintCallable)
    void SetConquestState(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable)
    void SetBossEleminationRewards(TArray<FMETA_BossEliminationRewardData> inRewards);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeakness();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCounterOfCapturesByPlayer();
    
    UFUNCTION(BlueprintPure)
    EMETA_TileWealth GetWealth();
    
    UFUNCTION(BlueprintPure)
    bool GetWeaknessLowerTier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaknessExpirationInDays() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_TileType GetType() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_TileSize GetTileSize() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetNeighbours() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetName();
    
    UFUNCTION(BlueprintPure)
    TArray<UMETA_BaseMission*> GetMissions() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UMETA_MissionID>> GetMissionClasses() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinAmountOfSoldiersForDefence() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinAmountOfSoldiersForAttack() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void GetIncome(const UObject* inWCO, int32& OutValue, FGameplayTag& outLootItem);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetId();
    
    UFUNCTION(BlueprintPure)
    EMETA_Gang GetGang() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_HubDistrict GetDistrictType() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_MapDisplayMode GetDisplayMode() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> GetDetectives();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWeakness() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentStrength() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCounterOfCapturesByPlayer();
    
    UFUNCTION(BlueprintPure)
    int32 GetCountdownAfterLost() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_Gang GetConquestState() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<FMETA_TileRewardData> GetCalculatedCaptureRewards(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<FMETA_BossEliminationRewardData> GetCalculatedBossEliminationRewards(const UObject* inWCO);
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_BossEliminationRewardData> GetBossEliminationRewardData() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_HubBackdropTypes GetBackdropType() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseExpireWeakness();
    
    UFUNCTION(BlueprintCallable)
    void ClearMissions();
    
    UFUNCTION(BlueprintCallable)
    void ClearDetectives();
    
    UFUNCTION(BlueprintCallable)
    void ClearBossEleminationRewards();
    
    UFUNCTION(BlueprintCallable)
    void AddMission(UMETA_BaseMission* inMission);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMETA_BaseMission* TurfWarObject;
    
    UPROPERTY(BlueprintReadOnly)
    bool isHighlighted;
    
    UPROPERTY(BlueprintReadOnly)
    bool isSelected;
    
    UPROPERTY(BlueprintReadOnly)
    bool isIconSelected;
    
    UPROPERTY(BlueprintReadOnly)
    bool isBossEliminationRewardsExist;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleHighglightedDelegate OnToggleHighglighted;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleSelectedDelegate OnToggleSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleIconSelectedDelegate OnToggleIconSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggleSelectedDelegate OnToggleTurfIconSelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnGangChangedDelegate OnGangChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnTypeChangedDelegate OnTypeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnConquestStateChangedDelegate OnConquestStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDisplayModeChangedDelegate OnDisplayModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissionsChangedDelegate OnMissionsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissionAddedDelegate OnMissionAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnMissionRemovedDelegate OnMissionRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnDetectivesChangedDelegate OnDetectivesChanged;
    
private:
    UPROPERTY()
    FGameplayTag m_ID;
    
    UPROPERTY()
    FText m_Name;
    
    UPROPERTY()
    EMETA_Gang m_Gang;
    
    UPROPERTY()
    TArray<FGameplayTag> m_Neighbours;
    
    UPROPERTY()
    EMETA_Gang m_ConquestState;
    
    UPROPERTY()
    EMETA_TileType m_Type;
    
    UPROPERTY()
    EIGS_HubDistrict m_DistrictType;
    
    UPROPERTY()
    EIGS_HubBackdropTypes m_BackdropType;
    
    UPROPERTY()
    EMETA_TileSize m_TileSize;
    
    UPROPERTY()
    TArray<UMETA_BaseMission*> m_Missions;
    
    UPROPERTY()
    int32 m_MinAmountOfSoldiersForAttack;
    
    UPROPERTY()
    int32 m_MinAmountOfSoldiersForDefence;
    
    UPROPERTY()
    int32 m_CurrentStrength;
    
    UPROPERTY()
    bool m_WeaknessLowerTier;
    
    UPROPERTY()
    int32 m_CurrentWeakness;
    
    UPROPERTY()
    int32 m_WeaknessExpireDays;
    
    UPROPERTY()
    int32 m_CounterOfCapturesByPlayer;
    
    UPROPERTY()
    EMETA_TileWealth m_Wealth;
    
    UPROPERTY()
    float m_IncomeMultiplier;
    
    UPROPERTY()
    int32 m_CountdownForAttackAfterLost;
    
    UPROPERTY()
    int32 m_IncomeValue;
    
    UPROPERTY()
    int32 m_OutIncomeValue;
    
    UPROPERTY()
    FGameplayTag m_IncomeLootItem;
    
    UPROPERTY()
    TArray<FMETA_TileRewardData> m_CaptureRewards;
    
    UPROPERTY()
    TArray<FMETA_BossEliminationRewardData> m_BossEliminationRewardData;
    
    UPROPERTY()
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> m_Detectives;
    
    UPROPERTY()
    EMETA_MapDisplayMode m_DisplayMode;
    
};

