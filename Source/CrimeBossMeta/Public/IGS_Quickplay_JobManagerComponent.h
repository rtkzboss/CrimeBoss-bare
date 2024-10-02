#pragma once
#include "CoreMinimal.h"
#include "IGS_MissionResult.h"
#include "UObject/NoExportTypes.h"
#include "IGS_JobManagerBaseComponent.h"
#include "IGS_Quickplay_JobManagerComponent.generated.h"

class APlayerState;
class UMETA_HordeModeMission;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_JobManagerComponent : public UIGS_JobManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_JobManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProcessMissionResultByMissionSubtype(const FIGS_MissionResult& inResult, APlayerState* inPlayerState, FDateTime inCurrentDateTime);

    UFUNCTION(BlueprintPure)
    TArray<UMETA_HordeModeMission*> GetRecentHordeModeMissions(int32 inMaxCount, bool inIncludeBest) const;

    UFUNCTION(BlueprintPure)
    UMETA_HordeModeMission* GetBestHordeModeMission() const;

    UFUNCTION(BlueprintCallable)
    void AddHordeModeMission(UMETA_HordeModeMission* inHordeModeMission);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMETA_HordeModeMission*> HordeModeMissions;

};
