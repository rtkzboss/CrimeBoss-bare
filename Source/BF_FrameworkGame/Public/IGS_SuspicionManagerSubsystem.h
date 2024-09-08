#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_SuspicionManagerSubsystem.generated.h"

class UIGS_SuspicionManager;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_SuspicionManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UIGS_SuspicionManager* CachedSuspicionManager;
    
public:
    UIGS_SuspicionManagerSubsystem();

};

