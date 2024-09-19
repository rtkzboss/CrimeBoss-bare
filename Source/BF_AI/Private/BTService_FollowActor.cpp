#include "BTService_FollowActor.h"
#include "GameFramework/Actor.h"

UBTService_FollowActor::UBTService_FollowActor() {
    FBlackboardKeySelector gen;
    gen.AddObjectFilter(this, TEXT("OutFollowActorKey_Object_2147482581"), AActor::StaticClass());
    (*this).OutFollowActorKey = gen;
    FBlackboardKeySelector gen2;
    gen2.AddFloatFilter(this, TEXT("OutFollowDistanceKey"));
    (*this).OutFollowDistanceKey = gen2;
    (*this).NodeName = TEXT("Follow Actor");
}

