#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicationCharacterAimingDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicationCharacterAimingDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AimInSpeedMult;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float AimOutSpeedMult;
    
    BF_NETWORK_API FIGS_ReplicationCharacterAimingDataHolder();
};

