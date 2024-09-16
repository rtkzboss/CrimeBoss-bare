#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_Achievement.h"
#include "IGS_LocalPlayerAchievementsInitialized.h"
#include "IGS_LocalPlayerAchievements.generated.h"

class UIGS_CommonAchievements;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_LocalPlayerAchievements : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UIGS_LocalPlayerAchievements();

    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;

    UFUNCTION(BlueprintCallable)
    void GetAchievementData(const FGameplayTag& AchievementID, bool& outFound, FIGS_Achievement& outAchievementData);

    UPROPERTY(BlueprintAssignable)
    FIGS_LocalPlayerAchievementsInitialized OnInitialized;

private:
    UPROPERTY()
    UIGS_CommonAchievements* m_CommonAchievements;

};
