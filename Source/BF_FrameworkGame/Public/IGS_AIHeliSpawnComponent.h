#pragma once
#include "CoreMinimal.h"
#include "IGS_AIPassengerSpawnComponentBase.h"
#include "IGS_HeliSpawnInfo.h"
#include "IGS_AIHeliSpawnComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AIHeliSpawnComponent : public UIGS_AIPassengerSpawnComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FallingSpeed;
    
    UPROPERTY(EditAnywhere)
    float GetOutAnimationDistance;
    
protected:
    UPROPERTY()
    TArray<FIGS_HeliSpawnInfo> m_HeliSpawnInfos;
    
public:
    UIGS_AIHeliSpawnComponent(const FObjectInitializer& ObjectInitializer);

};

