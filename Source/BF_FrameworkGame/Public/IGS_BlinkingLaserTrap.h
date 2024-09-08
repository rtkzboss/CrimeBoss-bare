#pragma once
#include "CoreMinimal.h"
#include "IGS_LaserTrap.h"
#include "IGS_BlinkingLaserTrap.generated.h"

class UTimelineComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_BlinkingLaserTrap : public AIGS_LaserTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTimelineComponent* BlinkTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChargeAfterLaserOnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> m_LaserOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> m_LaserOff;
    
public:
    AIGS_BlinkingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnBlinkOnTimeline();
    
    UFUNCTION()
    void OnBlinkOffTimeline();
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_StopBlinkingTimeline() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_PlayBlinkingTimeline() const;
    
};

