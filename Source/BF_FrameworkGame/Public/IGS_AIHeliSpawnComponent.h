#pragma once
#include "CoreMinimal.h"
#include "IGS_AIPassengerSpawnComponentBase.h"
#include "IGS_HeliSpawnInfo.h"
#include "IGS_AIHeliSpawnComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIHeliSpawnComponent : public UIGS_AIPassengerSpawnComponentBase {
    GENERATED_BODY()
public:
    UIGS_AIHeliSpawnComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    float FallingSpeed;

    UPROPERTY(EditAnywhere)
    float GetOutAnimationDistance;

protected:
    UPROPERTY()
    TArray<FIGS_HeliSpawnInfo> m_HeliSpawnInfos;

};
