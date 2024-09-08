#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_MissionNotification.generated.h"

class UMETA_BaseMission;

UCLASS()
class CRIMEBOSSMETA_API UMETA_MissionNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMETA_BaseMission* m_Mission;
    
public:
    UMETA_MissionNotification();

    UFUNCTION(BlueprintCallable)
    void SetMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintPure)
    UMETA_BaseMission* GetMission() const;
    
};

