#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_PingablePair.h"
#include "IGS_PingableManager.generated.h"

class UIGS_PingableManager;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_PingableManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_PingablePair> Pingables;
    
public:
    UIGS_PingableManager();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_PingableManager* Instance(const UObject* inWorldContextObject);
    
};

