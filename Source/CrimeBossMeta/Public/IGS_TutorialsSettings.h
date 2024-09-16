#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_TutorialScreen.h"
#include "Templates/SubclassOf.h"
#include "IGS_TutorialsSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class CRIMEBOSSMETA_API UIGS_TutorialsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_TutorialsSettings();

    UPROPERTY(Config, EditAnywhere)
    bool TutorialsSystemEnabled;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_TutorialScreen> DefaultTutorialScreenClass;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_TutorialScreen> DefaultVideoTutorialScreenClass;

};
