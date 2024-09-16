#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMissionObject.h"
#include "IGS_SmallHitMissionObject.generated.h"

UCLASS(Abstract)
class COMMON_DATA_API UIGS_SmallHitMissionObject : public UIGS_BaseMissionObject {
    GENERATED_BODY()
public:
    UIGS_SmallHitMissionObject();

};
