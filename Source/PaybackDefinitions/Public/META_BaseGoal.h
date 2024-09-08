#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EMETA_GoalPriority.h"
#include "EMETA_GoalPurpose.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_GoalType.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "META_BaseGoal.generated.h"

class UMETA_BaseGoal;
class UMETA_MissionID;
class UTexture2D;

UCLASS(Abstract, BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_BaseGoal : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EMETA_GoalType Type;
    
    UPROPERTY()
    EMETA_GoalPriority Priority;
    
    UPROPERTY()
    FGameplayTag EntitlementTag;
    
public:
    UMETA_BaseGoal();

    UFUNCTION(BlueprintCallable)
    void SetVisitedNodeIDs(TSet<int32> inNodeIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetMissions(TArray<TSubclassOf<UMETA_MissionID>> inMissionIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalResult(EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintPure)
    bool IsGoalRepeatable(int32& outDaysBeetwenAttempts) const;
    
    UFUNCTION(BlueprintPure)
    TSet<int32> GetVisitedNodeIDs() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_GoalType GetType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_GoalPurpose GetPurpose() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_GoalPriority GetPriority() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPicture() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetMissions();
    
    UFUNCTION(BlueprintPure)
    EMETA_Partner GetInstigatorPartner() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_BaseGoal> GetId() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintPure)
    EMETA_GoalStatus GetGoalResult() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetEntitlementTag() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVisitedNode(const int32 inNodeID);
    
    UFUNCTION(BlueprintCallable)
    void AddMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
};

