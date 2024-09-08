#pragma once
#include "CoreMinimal.h"
#include "IGS_SystemEventNotificationData.h"
#include "IGS_SusManagerEventNotificationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SusManagerEventNotificationData : public FIGS_SystemEventNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* PointOfInterest;
    
    FIGS_SusManagerEventNotificationData();
};

