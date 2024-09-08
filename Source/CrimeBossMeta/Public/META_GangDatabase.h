#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMETA_Gang.h"
#include "META_GangTableRow.h"
#include "META_GangDatabase.generated.h"

class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_GangDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_GangDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_GangTableRow GetGangData(UObject* inWCO, const EMETA_Gang inGang, bool& outSucceeded);
    
};

