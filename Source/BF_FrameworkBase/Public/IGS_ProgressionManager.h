#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ProgressionResult.h"
#include "IGS_ProgressionManager.generated.h"

class UCurveTable;
class UIGS_ProgressionManagerData;

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_ProgressionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_ProgressionManagerEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_ProgressionDataChanged, int32, Level, float, Points, bool, isMaxLevel);
    
    UIGS_ProgressionManager();

    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult SetPoints(float inPoints, bool inSaveProgression, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult SetLevel(int32 inLevel, bool inSaveProgression, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMultiplier(const float inMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void ResetProgression();
    
    UFUNCTION(BlueprintCallable)
    void ReInitProgressionManager();
    
    UFUNCTION(BlueprintCallable)
    FIGS_ProgressionResult ProcessMissionResult(UPARAM(Ref) FIGS_MissionResult& inMissionResult, float inAdditionalPoints);
    
    UFUNCTION(BlueprintPure)
    bool HasMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressToNextLevelFromPoints(float inPoints, int32 inNextLevel) const;
    
    UFUNCTION(BlueprintPure)
    float GetProgressToNextLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetPointsForLevel(int32 inLevel) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxPointsForLevel(int32 inLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetDebugMultiplier() const;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentPoints;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ProgressToNextLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float PreviousPoints;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PreviousLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PendingLevelUps;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_ProgressionManagerData* ProgressionManagerData;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ProgressionDataChanged OnProgressionDataChanged;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ProgressionManagerEvent OnInitialized;
    
    UPROPERTY(BlueprintReadOnly)
    UCurveTable* ProgressionCurveTable;
    
};

