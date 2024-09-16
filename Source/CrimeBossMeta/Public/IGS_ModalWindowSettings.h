#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_ModalScreen.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModalWindowSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class CRIMEBOSSMETA_API UIGS_ModalWindowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_ModalWindowSettings();

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_ModalScreen> DefaultBasicModalScreenClass;

    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UIGS_ModalScreen> DefaultAdvancedModalScreenClass;

};
