#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AchievementsWorldManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AchievementsWorldManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AchievementsWorldManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool UpdateAchievement(UObject* WCO, FGameplayTag AchievementID, int32 Increment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WCO))
    static bool UnlockAchievement(UObject* WCO, FGameplayTag AchievementID);
    
};

