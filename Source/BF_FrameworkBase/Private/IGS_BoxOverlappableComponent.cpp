#include "IGS_BoxOverlappableComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"

UIGS_BoxOverlappableComponent::UIGS_BoxOverlappableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).OverlappableType = EIGS_OverlapResponseType::ORT_NotifyOnly;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("OverlapOnlyProjectile");
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen3 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    (*gen3->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Ignore;
    FResponseChannel gen4;
    gen4.Channel = TEXT("WorldStatic");
    gen4.Response = ECR_Ignore;
    FResponseChannel gen5;
    gen5.Channel = TEXT("WorldDynamic");
    gen5.Response = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("Pawn");
    gen6.Response = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("Visibility");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("Camera");
    gen8.Response = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("PhysicsBody");
    gen9.Response = ECR_Ignore;
    FResponseChannel gen10;
    gen10.Channel = TEXT("Vehicle");
    gen10.Response = ECR_Ignore;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Destructible");
    gen11.Response = ECR_Ignore;
    FResponseChannel gen12;
    gen12.Channel = TEXT("Bullet");
    gen12.Response = ECR_Overlap;
    FResponseChannel gen13;
    gen13.Channel = TEXT("AIPawn");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("Projectile");
    gen14.Response = ECR_Ignore;
    FResponseChannel gen15;
    gen15.Channel = TEXT("IK");
    gen15.Response = ECR_Ignore;
    FResponseChannel gen16;
    gen16.Channel = TEXT("Footstep");
    gen16.Response = ECR_Ignore;
    FResponseChannel gen17;
    gen17.Channel = TEXT("VisibilityWorld");
    gen17.Response = ECR_Ignore;
    FResponseChannel gen18;
    gen18.Channel = TEXT("Sound");
    gen18.Response = ECR_Ignore;
    FResponseChannel gen19;
    gen19.Channel = TEXT("Interactive");
    gen19.Response = ECR_Ignore;
    FResponseChannel gen20;
    gen20.Channel = TEXT("PawnRigidBody");
    gen20.Response = ECR_Ignore;
    FResponseChannel gen21;
    gen21.Channel = TEXT("ImportantPhysicsActor");
    gen21.Response = ECR_Ignore;
    FResponseChannel gen22;
    gen22.Channel = TEXT("PhysicsPushAway");
    gen22.Response = ECR_Ignore;
    FResponseChannel gen23;
    gen23.Channel = TEXT("VisibilityExplosion");
    gen23.Response = ECR_Ignore;
    FResponseChannel gen24;
    gen24.Channel = TEXT("Water");
    gen24.Response = ECR_Ignore;
    FResponseChannel gen25;
    gen25.Channel = TEXT("PlaceDynamicObject");
    gen25.Response = ECR_Ignore;
    auto gen26 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen26->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen2->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen4), MoveTemp(gen5), MoveTemp(gen6), MoveTemp(gen7), MoveTemp(gen8), MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11), MoveTemp(gen12), MoveTemp(gen13), MoveTemp(gen14), MoveTemp(gen15), MoveTemp(gen16), MoveTemp(gen17), MoveTemp(gen18), MoveTemp(gen19), MoveTemp(gen20), MoveTemp(gen21), MoveTemp(gen22), MoveTemp(gen23), MoveTemp(gen24), MoveTemp(gen25)};
}

