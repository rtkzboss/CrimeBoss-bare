#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_FPSMissionSubtype.h"
#include "EMETA_RespectLvl.h"
#include "META_MissionID.h"
#include "META_FPSMissionInfo.h"
#include "META_MissionDatabase.h"
#include "Templates/SubclassOf.h"
#include "ChainMissionsDatabase.generated.h"

class UMETA_BaseMission;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UChainMissionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UChainMissionsDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    TArray<TSubclassOf<UMETA_MissionID>> GetMoneyMakingChainMissionIDsWithLootTypeByUnlockRespect(const UObject* inWCO, FGameplayTag inLootType, EMETA_RespectLvl inUnlockRespect);

    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype);

    UFUNCTION(BlueprintCallable)
    FMETA_FPSMissionInfo GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UMETA_BaseMission* GetChainMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_MissionDatabase GetChainMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded);

};
