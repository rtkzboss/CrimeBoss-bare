#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_InspectRecord.h"
#include "IGS_MoveRecord.h"
#include "IGS_ShoutAtRecord.h"
#include "IGS_StickyTargetInfo.h"
#include "IGS_StrafeRecord.h"
#include "IGS_ZiptieRecord.h"
#include "IGS_AIDesyncronizer.generated.h"

UCLASS()
class BF_AI_API UIGS_AIDesyncronizer : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_AIDesyncronizer();

protected:
    UPROPERTY()
    TArray<FIGS_StrafeRecord> StrafeRecords;

    UPROPERTY()
    TArray<FIGS_MoveRecord> MoveToRecords;

    UPROPERTY()
    TArray<FIGS_ZiptieRecord> ZiptieRecords;

    UPROPERTY()
    TArray<FIGS_ShoutAtRecord> ShoutAtRecords;

    UPROPERTY()
    TArray<FIGS_StickyTargetInfo> m_StickyTargets;

    UPROPERTY()
    TArray<FIGS_InspectRecord> m_MovingInspectsRecords;

};
