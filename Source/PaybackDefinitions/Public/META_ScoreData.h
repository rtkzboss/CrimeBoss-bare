#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_UserDifficulty.h"
#include "META_ScoreRatingEntry.h"
#include "META_ScoreData.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_ScoreData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxScoreWon;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinScoreWon;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreDecreasePerDayElapsedWon;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinDaysWon;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxScoreLost;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinScoreLost;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreDecreasePerDayElapsedLost;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinDaysLost;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_UserDifficulty, float> RatingMultiplierPerCampaignDifficulty;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FMETA_ScoreRatingEntry> Ratings;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePer1PercentControlledTerritory;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerEnemyLeader;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerFinishedHeist;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerVeteranPromotion;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerElitePromotion;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerDeadHeister;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerMissingHeister;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerDesertersHeister;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerDayBankruptcy;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerGoal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePerCivilian;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxScore;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScorePer1000ValueInCashOrLoot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreFor0Stars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreFor1Stars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreFor2Stars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreFor3Stars;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxStarScoreLimit;
    
public:
    UMETA_ScoreData();

    UFUNCTION(BlueprintPure)
    int32 GetScorePerVeteranPromotion() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerMissingHeister() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerGoal() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerFinishedHeist() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerEnemyLeader() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerElitePromotion() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerDesertersHeister() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerDeadHeister() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerDayBankruptcy() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePerCivilian() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePer1PercentControlledTerritory() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScorePer1000ValueInCashOrLoot() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreFor3Stars() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreFor2Stars() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreFor1Stars() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreFor0Stars() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreDecreasePerDayElapsedWon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScoreDecreasePerDayElapsedLost() const;
    
    UFUNCTION(BlueprintPure)
    FText GetRatingForScore(const int32 inScore, const EIGS_UserDifficulty inDifficulty) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinScoreWon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinScoreLost() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinDaysWon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMinDaysLost() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxStarScoreLimit() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxScoreWon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxScoreLost() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxScore() const;
    
};

