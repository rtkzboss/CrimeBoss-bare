#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KiBLIISettings.generated.h"

UCLASS(DefaultConfig)
class UKiBLIISettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableInGame;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableInEditor;
    
    UKiBLIISettings();

};

