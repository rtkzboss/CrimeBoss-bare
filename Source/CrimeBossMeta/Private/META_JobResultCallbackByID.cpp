#include "META_JobResultCallbackByID.h"
#include "Templates/SubclassOf.h"

UMETA_JobResultCallbackByID::UMETA_JobResultCallbackByID() {
    (*this).NextNodesMap = TMap<EMETA_JobResult, int32>{};
    (*this).OverridePath = EMETA_JobResult::Ignored;
}

TArray<EMETA_JobResult> UMETA_JobResultCallbackByID::GetAdditionalInfo(TSubclassOf<UMETA_MissionID> inMissionID) {
    return {};
}

