#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadBase.h"
#include "IGS_ReviveRecord.h"
#include "BTTask_SquadHeistersRevive.generated.h"

UCLASS()
class BF_AI_API UBTTask_SquadHeistersRevive : public UIGS_BTTask_SquadBase {
    GENERATED_BODY()
public:
    UBTTask_SquadHeistersRevive();

protected:
    UPROPERTY()
    TArray<FIGS_ReviveRecord> m_RevivingRecord;
    
};

