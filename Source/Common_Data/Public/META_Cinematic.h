#pragma once
#include "CoreMinimal.h"
#include "META_BaseMission.h"
#include "META_BaseMissionSave.h"
#include "META_CinematicMissionRowInfo.h"
#include "META_Cinematic.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_Cinematic : public UMETA_BaseMission {
    GENERATED_BODY()
public:
    UMETA_Cinematic();

    UFUNCTION(BlueprintPure)
    FMETA_CinematicMissionRowInfo GetInfo() const;
    
private:
    UPROPERTY()
    FMETA_BaseMissionSave m_CinematicMissionSave;
    
};

