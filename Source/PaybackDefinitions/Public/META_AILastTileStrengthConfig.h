#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_AILastTileStrengthConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AILastTileStrengthConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_Interval AI_ArmySizeForPlayersAttackOnLastTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile;
    
    FMETA_AILastTileStrengthConfig();
};

