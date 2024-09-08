#pragma once
#include "CoreMinimal.h"
#include "ECommonMissionResult.h"
#include "UObject/Object.h"
#include "IGS_MissionResultAnimationData.generated.h"

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UIGS_MissionResultAnimationData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommonMissionResult MissionResult;
    
    UIGS_MissionResultAnimationData();

};

