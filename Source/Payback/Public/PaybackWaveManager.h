#pragma once
#include "CoreMinimal.h"
#include "IGS_WaveManager.h"
#include "PaybackWaveManager.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackWaveManager : public UIGS_WaveManager {
    GENERATED_BODY()
public:
    UPaybackWaveManager(const FObjectInitializer& ObjectInitializer);

};

