#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelBuilderRepProperties.generated.h"

USTRUCT()
struct FIGS_LevelBuilderRepProperties {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 ReplicatedSeed;
    
    UPROPERTY(VisibleAnywhere)
    FString OptionsString;
    
    BF_LEVELGENERATOR_API FIGS_LevelBuilderRepProperties();
};

