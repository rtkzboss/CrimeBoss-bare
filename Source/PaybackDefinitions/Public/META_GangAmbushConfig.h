#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_Chance.h"
#include "META_GangAmbushConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangAmbushConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, FMETA_Chance> DefaultForGangAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NoGangsterKilledInMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionWasDoneInStealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BossInTopEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BossIsInGangsEnemyList;
    
    FMETA_GangAmbushConfig();
};

