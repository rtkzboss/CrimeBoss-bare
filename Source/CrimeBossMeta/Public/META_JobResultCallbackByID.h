#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobResult.h"
#include "META_MissionID.h"
#include "META_BaseCallback.h"
#include "Templates/SubclassOf.h"
#include "META_JobResultCallbackByID.generated.h"

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_JobResultCallbackByID : public UMETA_BaseCallback {
    GENERATED_BODY()
public:
    UMETA_JobResultCallbackByID();

    UFUNCTION(BlueprintPure)
    TArray<EMETA_JobResult> GetAdditionalInfo(TSubclassOf<UMETA_MissionID> inMissionID);

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<EMETA_JobResult, int32> NextNodesMap;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOverridePathIfMissionDoesntExist;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EMETA_JobResult OverridePath;

protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<EMETA_JobResult> ResultsWhenJobIsNotRemovedFromTheMap;

};
