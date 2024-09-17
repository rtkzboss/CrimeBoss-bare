#include "IGS_PingableWidgetActor.h"
#include "Engine/EngineTypes.h"
#include "IGS_WorldSpaceWidgetBase.h"

AIGS_PingableWidgetActor::AIGS_PingableWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Ping Widget"));
    (*this).PingDuration = 5.000000000e+00f;
    (*this).NetworkDormantTimer = 5.000000000e+00f;
    (*this).PingWidget = gen;
    (*this).SetReplicatingMovement(true);
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen;
}

void AIGS_PingableWidgetActor::Multicast_ShowPingWidget_Implementation(float inPingDuration) {
}

void AIGS_PingableWidgetActor::Multicast_Release_Implementation() {
}

