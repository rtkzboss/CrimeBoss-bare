#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamSideAffinitiesHolder.h"
#include "IGS_PaybackGameSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class BF_FRAMEWORKBASE_API UIGS_PaybackGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_PaybackGameSettings();

    UPROPERTY(Config, EditAnywhere)
    TMap<EIGS_TeamSideEnum, FColor> TeamSideColors;

    UPROPERTY(Config, EditAnywhere)
    TMap<EIGS_TeamSideEnum, FIGS_TeamSideAffinitiesHolder> TeamSideAffinitiesMap;

};
