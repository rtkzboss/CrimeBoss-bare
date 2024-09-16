#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "META_DetectiveID.h"
#include "META_DetectiveTableRow.h"
#include "Templates/SubclassOf.h"
#include "META_DetectiveDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UMETA_DetectiveDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_DetectiveDatabase();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    TArray<TSubclassOf<UMETA_DetectiveID>> GetDetectivesIDs(UObject* inWCO) const;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_DetectiveTableRow GetDetectiveData(UObject* inWCO, TSubclassOf<UMETA_DetectiveID> inID, bool& outSucceeded);

};
