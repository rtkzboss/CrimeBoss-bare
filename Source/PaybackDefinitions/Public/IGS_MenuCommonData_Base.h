#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_RespectLvl.h"
#include "META_DifficultyConfig.h"
#include "IGS_MenuCommonData_Base.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UIGS_MenuCommonData_Base : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MenuCommonData_Base();

    UFUNCTION(BlueprintCallable)
    TArray<EIGS_UserDifficulty> GetSupportedDifficulties();

    UFUNCTION(BlueprintPure)
    EIGS_ScenarioDifficulty GetRandomizedDifficulty(EMETA_RespectLvl inRespectLvl) const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEdgeCaseObjective() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetBossCharacterTagID() const;

    UFUNCTION(BlueprintPure)
    int32 GetAmountOfMissionsCanBeCompletedByEachHeisterPerDay() const;

    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAllowedLoot() const;

protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag BossCharacterTagID;

    UPROPERTY(EditDefaultsOnly)
    int32 AmountOfMissionsCanBeCompletedByEachHeisterPerDay;

    UPROPERTY(EditDefaultsOnly)
    TMap<EMETA_RespectLvl, FMETA_DifficultyConfig> ChancesForGeneratingMissionWithDifficulty;

    UPROPERTY(EditDefaultsOnly)
    FGameplayTag EdgeCaseObjective;

    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer AllowedLoot;

};
