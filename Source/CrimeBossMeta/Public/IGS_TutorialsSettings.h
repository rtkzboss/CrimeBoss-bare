#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "IGS_TutorialsSettings.generated.h"

class UIGS_TutorialScreen;

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

