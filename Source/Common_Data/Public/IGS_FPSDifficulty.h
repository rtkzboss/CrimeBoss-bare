#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_FPSDifficulty.generated.h"

class UIGS_FPSDifficultyDataAsset;

UCLASS()
class COMMON_DATA_API UIGS_FPSDifficulty : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UIGS_FPSDifficultyDataAsset* m_FPSDifficultyDA;
    
public:
    UIGS_FPSDifficulty();

};

