#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "IGS_PingableWidgetActor.generated.h"

class UIGS_WorldSpaceWidgetBase;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PingableWidgetActor : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float PingDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NetworkDormantTimer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_WorldSpaceWidgetBase* PingWidget;
    
public:
    AIGS_PingableWidgetActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_ShowPingWidget(float inPingDuration);
    
public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_Release();
    
};

