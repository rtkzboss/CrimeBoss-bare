#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AfraidOfDanger.h"
#include "DangerArea.h"
#include "IGS_DangerManager.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_DangerManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_DangerManager();

private:
    UPROPERTY()
    TArray<FDangerArea> m_DangerAreas;
    
    UPROPERTY()
    TArray<FAfraidOfDanger> m_AfraidOfDanger;
    
    virtual TStatId GetStatId() const override { return {}; }
};

