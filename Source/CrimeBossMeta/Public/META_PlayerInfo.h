#pragma once
#include "CoreMinimal.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_RespectLvl.h"
#include "META_PlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FMETA_PlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl RespectLvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Army;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AvailableArmy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ArmyTier ArmyTier;
    
    CRIMEBOSSMETA_API FMETA_PlayerInfo();
};

