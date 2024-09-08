#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMETA_BonusType.h"
#include "EMETA_BonusUsage.h"
#include "EMETA_BossLevelCategory.h"
#include "META_AdditionalHeisters.h"
#include "META_BonusTypeData.h"
#include "META_BonusTypesArray.h"
#include "META_BossLevelReductionConfig.h"
#include "META_ExtraBossEquipmentData.h"
#include "META_ExtraBossWeaponsData.h"
#include "META_StartingBossPerks.h"
#include "Templates/SubclassOf.h"
#include "META_BossLevelData.generated.h"

class UCurveTable;
class UGameplayEffect;

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_BossLevelData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulFPSMissionByBoss;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulFPSMission;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulBigHeist;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulTWAttackNeutral;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulTWAttackRival;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerSuccessfulTWDefence;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPer10000Score;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BossPointsPerWaveMaxPoints;
    
    UPROPERTY(EditDefaultsOnly)
    float BossPointsPerWaveMaxPercentAwardPerKill;
    
    UPROPERTY(EditDefaultsOnly)
    float BossPointsPerWaveMaxPercentAwardPerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    FMETA_BossLevelReductionConfig BossLevelReductionConfig;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveTable* BonusesTable;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray> CategoryBonuses;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> ArmyHiddenPerksByBonusType;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> BossHiddenPerksByBonusType;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> CaptainHiddenPerksByBonusType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> CaptainPerks;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> BossPerks;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_ExtraBossWeaponsData> PrimaryWeaponQuality;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_ExtraBossEquipmentData> BonusEquipmentQuality;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_AdditionalHeisters> StartingHeisters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_StartingBossPerks> StartingBossPerks;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_BonusType, FMETA_BonusTypeData> BonusTypeData;
    
public:
    UMETA_BossLevelData();

    UFUNCTION(BlueprintPure)
    TArray<FMETA_AdditionalHeisters> GetStartingHeisters() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_StartingBossPerks> GetStartingBossPerks() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_ExtraBossWeaponsData> GetPrimaryWeaponQuality() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurveTableRowName(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray> GetCategoryBonuses() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UGameplayEffect>> GetCaptainPerks() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_BonusType> GetCaptainPerkBonuses() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGameplayEffect> GetCaptainHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerWaveDefenseSecondsSurvived(const int32 InSeconds) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerWaveDefenseKills(const int32 inKills) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerSuccessfulTwDefence() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerSuccessfulTwAttackRival() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerSuccessfulTWAttackNeutral() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerSuccessfulFPSMission() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerSuccessfulBigHeist() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPerAsset() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointsPer10000Score() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBossPointMaxRewardPerWaveDefense() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UGameplayEffect>> GetBossPerks() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_BonusType> GetBossPerkBonuses() const;
    
    UFUNCTION(BlueprintPure)
    FMETA_BossLevelReductionConfig GetBossLevelReductionConfig() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGameplayEffect> GetBossHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
    UFUNCTION(BlueprintPure)
    EMETA_BonusUsage GetBonusUsage(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBonusMaxLevel(EMETA_BonusType inBonusType, int32& outMaxLevel);
    
    UFUNCTION(BlueprintPure)
    UCurveTable* GetBonusesTable() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMETA_ExtraBossEquipmentData> GetBonusEquipmentQuality() const;
    
    UFUNCTION(BlueprintPure)
    TArray<EMETA_BonusType> GetArmyPerkBonuses() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGameplayEffect> GetArmyHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
};

