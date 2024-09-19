#include "BTService_GR_TrackGrenade.h"
#include "GameFramework/Actor.h"
#include "IGS_GeneralReactionData_Base.h"

UBTService_GR_TrackGrenade::UBTService_GR_TrackGrenade() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("GeneralReactionDataKey_Object_2147482574"), UIGS_GeneralReactionData_Base::StaticClass());
    (*this).GeneralReactionDataKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddObjectFilter(this, TEXT("GrenadeActorKey_Object_2147482575"), AActor::StaticClass());
    (*this).GrenadeActorKey = gen2;
    (*this).SafePeriod = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Track Grenade");
}

