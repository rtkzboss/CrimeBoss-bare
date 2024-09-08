#pragma once
#include "CoreMinimal.h"
#include "META_BaseGoal.h"
#include "META_ActionCardsManagment.h"
#include "META_Goal.h"
#include "META_TaskManagment.h"
#include "META_StoryGoal.generated.h"

class UStoryGraphManager;

UCLASS(Abstract)
class CRIMEBOSSMETA_API UMETA_StoryGoal : public UMETA_BaseGoal, public IMETA_TaskManagment, public IMETA_ActionCardsManagment {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMETA_Goal m_Goal;
    
public:
    UMETA_StoryGoal();

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UStoryGraphManager> GetGraph();
    

    // Fix for true pure virtual functions not being implemented
};

