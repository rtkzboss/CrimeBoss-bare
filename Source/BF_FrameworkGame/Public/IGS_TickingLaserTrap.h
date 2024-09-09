#pragma once
#include "CoreMinimal.h"
#include "IGS_LaserTrap.h"
#include "IGS_TickingLaserTrap.generated.h"

class UCurveFloat;
class UTimelineComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_TickingLaserTrap : public AIGS_LaserTrap {
    GENERATED_BODY()
public:
    AIGS_TickingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Reliable)
    void Client_StopRotationTimeline() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_PlayRotationTimeline(bool inReverting) const;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UTimelineComponent* TickTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(Replicated)
    bool mR_bIsReversing;
    
private:
    UPROPERTY()
    UCurveFloat* m_TickingCurve;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

