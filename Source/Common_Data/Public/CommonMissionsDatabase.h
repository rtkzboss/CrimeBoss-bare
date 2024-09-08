#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonMissionDataBase.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionsDatabase.generated.h"

class UIGS_BaseMissionObject;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UCommonMissionsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCommonMissionsDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FCommonMissionDataBase GetBaseMissionDataBP(const UObject* inWCO, const TSubclassOf<UIGS_BaseMissionObject>& inClass, bool& outSucceeded);
    
};

