#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModalWindowSettings.generated.h"

class UIGS_ModalScreen;

UCLASS(DefaultConfig, Config=Game)
class CRIMEBOSSMETA_API UIGS_ModalWindowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_ModalScreen> DefaultBasicModalScreenClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_ModalScreen> DefaultAdvancedModalScreenClass;
    
    UIGS_ModalWindowSettings();

};

