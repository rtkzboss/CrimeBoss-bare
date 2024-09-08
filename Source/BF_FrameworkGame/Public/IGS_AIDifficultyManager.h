#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIDifficultyManager.generated.h"

class UIGS_AIDifficultyManager;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_AIDifficultyManager : public UObject {
    GENERATED_BODY()
public:
    UIGS_AIDifficultyManager();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_AIDifficultyManager* Instance(const UObject* inWorldContextObject);
    
};

