#include "IGS_CoverPointComponent.h"
#include "CoverPoint.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CoverPointComponent::UIGS_CoverPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UCoverPoint>(TEXT("CoverPoint"));
    (*this).CoverPoint = gen;
    (*this).CapsuleHalfHeight = 9.200000000e+01f;
    (*this).CapsuleRadius = 4.500000000e+01f;
    (*this).AreaClass = UNavArea_Obstacle::StaticClass();
    (*this).bShouldCollideWhenPlacing = true;
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_WorldStatic;
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionEnabled");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type>>(&(*this).BodyInstance, 0)) = ECollisionEnabled::NoCollision;
    auto gen4 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen4->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("NoCollision");
    auto gen5 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen6 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    (*gen6->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("WorldStatic");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("WorldDynamic");
    gen8.Response = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("Pawn");
    gen9.Response = ECR_Ignore;
    FResponseChannel gen10;
    gen10.Channel = TEXT("Visibility");
    gen10.Response = ECR_Ignore;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Camera");
    gen11.Response = ECR_Ignore;
    FResponseChannel gen12;
    gen12.Channel = TEXT("PhysicsBody");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("Vehicle");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("Destructible");
    gen14.Response = ECR_Ignore;
    FResponseChannel gen15;
    gen15.Channel = TEXT("Bullet");
    gen15.Response = ECR_Ignore;
    FResponseChannel gen16;
    gen16.Channel = TEXT("AIPawn");
    gen16.Response = ECR_Ignore;
    FResponseChannel gen17;
    gen17.Channel = TEXT("Projectile");
    gen17.Response = ECR_Ignore;
    FResponseChannel gen18;
    gen18.Channel = TEXT("IK");
    gen18.Response = ECR_Ignore;
    FResponseChannel gen19;
    gen19.Channel = TEXT("Footstep");
    gen19.Response = ECR_Ignore;
    FResponseChannel gen20;
    gen20.Channel = TEXT("VisibilityWorld");
    gen20.Response = ECR_Ignore;
    FResponseChannel gen21;
    gen21.Channel = TEXT("Sound");
    gen21.Response = ECR_Ignore;
    FResponseChannel gen22;
    gen22.Channel = TEXT("Interactive");
    gen22.Response = ECR_Ignore;
    FResponseChannel gen23;
    gen23.Channel = TEXT("PawnRigidBody");
    gen23.Response = ECR_Ignore;
    FResponseChannel gen24;
    gen24.Channel = TEXT("ImportantPhysicsActor");
    gen24.Response = ECR_Ignore;
    FResponseChannel gen25;
    gen25.Channel = TEXT("PhysicsPushAway");
    gen25.Response = ECR_Ignore;
    FResponseChannel gen26;
    gen26.Channel = TEXT("VisibilityExplosion");
    gen26.Response = ECR_Ignore;
    FResponseChannel gen27;
    gen27.Channel = TEXT("Water");
    gen27.Response = ECR_Ignore;
    FResponseChannel gen28;
    gen28.Channel = TEXT("PlaceDynamicObject");
    gen28.Response = ECR_Ignore;
    auto gen29 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen29->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen5->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen7), MoveTemp(gen8), MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11), MoveTemp(gen12), MoveTemp(gen13), MoveTemp(gen14), MoveTemp(gen15), MoveTemp(gen16), MoveTemp(gen17), MoveTemp(gen18), MoveTemp(gen19), MoveTemp(gen20), MoveTemp(gen21), MoveTemp(gen22), MoveTemp(gen23), MoveTemp(gen24), MoveTemp(gen25), MoveTemp(gen26), MoveTemp(gen27), MoveTemp(gen28)};
}

void UIGS_CoverPointComponent::DeactivateCoverPoint(bool inForceDeactivate) {
}

bool UIGS_CoverPointComponent::ActivateCoverPoint(bool inForceActivate) {
    return false;
}

