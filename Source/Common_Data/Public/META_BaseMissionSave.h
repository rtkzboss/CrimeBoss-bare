#pragma once
#include "CoreMinimal.h"
#include "META_MissionOnTileInfo.h"
#include "Templates/SubclassOf.h"
#include "META_BaseMissionSave.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_MissionID> MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_MissionOnTileInfo MissionOnTileInfo;
    
    FMETA_BaseMissionSave();
};

