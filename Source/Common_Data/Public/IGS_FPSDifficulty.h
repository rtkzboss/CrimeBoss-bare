#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_FPSDifficulty.generated.h"

class UIGS_FPSDifficultyDataAsset;

UCLASS()
class COMMON_DATA_API UIGS_FPSDifficulty : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_FPSDifficulty();

private:
    UPROPERTY(Transient)
    UIGS_FPSDifficultyDataAsset* m_FPSDifficultyDA;

};
