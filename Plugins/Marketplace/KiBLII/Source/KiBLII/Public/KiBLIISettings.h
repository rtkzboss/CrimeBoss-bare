#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KiBLIISettings.generated.h"

UCLASS(DefaultConfig, Config=Engine)
class UKiBLIISettings : public UObject {
    GENERATED_BODY()
public:
    UKiBLIISettings();

    UPROPERTY(Config, EditAnywhere)
    bool bEnableInGame;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableInEditor;
    
};

