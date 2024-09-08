#pragma once
#include "CoreMinimal.h"
#include "IGS_SaveData_Base.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SaveData_Base {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString MetaPersistentId;
    
    FIGS_SaveData_Base();
};

