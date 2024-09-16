#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_CoverPreset.h"
#include "IGS_FollowSettings.h"
#include "IGS_SettingsHelpersLibrary.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_SettingsHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_SettingsHelpersLibrary();

    UFUNCTION()
    static bool UseCoverInCombatRange(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetTotalTimeInCover(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetTimeInCover(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetStrafeShootingChance(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetReactionThrashTreshold(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetReactionTargetFirstTimeSeenCooldown(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetReactionRollToCoverCooldown(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetReactionCooldown(AIGS_AIControllerGame* Controller, bool Randomize);

    UFUNCTION()
    static float GetMaxHealthForReaction(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetMaxHealthForCover(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static FIGS_FollowSettings GetFollowSettings(AIGS_GameCharacterFramework* Character);

    UFUNCTION()
    static EIGS_CoverPreset GetCoverPreset(AIGS_AIControllerGame* Controller);

    UFUNCTION()
    static float GetCombatRangeMin(AIGS_AIControllerGame* InController, const bool inRawValue);

    UFUNCTION()
    static float GetCombatRangeMax(AIGS_AIControllerGame* InController, const bool inRawValue);

    UFUNCTION()
    static float GetCombatMoveCooldown(AIGS_AIControllerGame* Controller);

};
