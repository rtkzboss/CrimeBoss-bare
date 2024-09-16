#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_VolumeFallDeath.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_VolumeFallDeath : public AVolume {
    GENERATED_BODY()
public:
    AIGS_VolumeFallDeath(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);

protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool bIsActive;

};
