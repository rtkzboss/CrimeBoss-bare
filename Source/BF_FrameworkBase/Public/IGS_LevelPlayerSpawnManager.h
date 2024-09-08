#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LevelPlayerSpawnManager.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_LevelPlayerSpawnManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsSpawnEnabled;
    
    UIGS_LevelPlayerSpawnManager();

};

