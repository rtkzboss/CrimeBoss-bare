#pragma once
#include "CoreMinimal.h"
#include "IGS_FrameworkGameDevSettings_Base.h"
#include "IGS_FrameworkGameDevSettings_Achievements.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_Achievements : public UIGS_FrameworkGameDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_FrameworkGameDevSettings_Achievements();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> AchievementsSummaryDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> RichPresenceDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> RichPresenceChainsDataTable;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UDataTable> RichPresenceMissionsDataTable;

};
