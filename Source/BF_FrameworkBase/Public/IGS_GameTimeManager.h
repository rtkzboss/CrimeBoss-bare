#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_GameTimeManager.generated.h"

class UIGS_TimeLineHolder;

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_GameTimeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_GameTimeManager();

private:
    UPROPERTY()
    TArray<UIGS_TimeLineHolder*> m_Timelines;
    
};

