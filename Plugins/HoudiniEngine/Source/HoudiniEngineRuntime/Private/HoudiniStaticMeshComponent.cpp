#include "HoudiniStaticMeshComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"

UHoudiniStaticMeshComponent::UHoudiniStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bHoudiniIconVisible = true;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionEnabled");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type>>(&(*this).BodyInstance, 0)) = ECollisionEnabled::NoCollision;
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("NoCollision");
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Ignore;
    FResponseChannel gen5;
    gen5.Channel = TEXT("WorldStatic");
    gen5.Response = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("WorldDynamic");
    gen6.Response = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("Pawn");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("Visibility");
    gen8.Response = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("Camera");
    gen9.Response = ECR_Ignore;
    FResponseChannel gen10;
    gen10.Channel = TEXT("PhysicsBody");
    gen10.Response = ECR_Ignore;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Vehicle");
    gen11.Response = ECR_Ignore;
    FResponseChannel gen12;
    gen12.Channel = TEXT("Destructible");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("Bullet");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("AIPawn");
    gen14.Response = ECR_Ignore;
    FResponseChannel gen15;
    gen15.Channel = TEXT("Projectile");
    gen15.Response = ECR_Ignore;
    FResponseChannel gen16;
    gen16.Channel = TEXT("IK");
    gen16.Response = ECR_Ignore;
    FResponseChannel gen17;
    gen17.Channel = TEXT("Footstep");
    gen17.Response = ECR_Ignore;
    FResponseChannel gen18;
    gen18.Channel = TEXT("VisibilityWorld");
    gen18.Response = ECR_Ignore;
    FResponseChannel gen19;
    gen19.Channel = TEXT("Sound");
    gen19.Response = ECR_Ignore;
    FResponseChannel gen20;
    gen20.Channel = TEXT("Interactive");
    gen20.Response = ECR_Ignore;
    FResponseChannel gen21;
    gen21.Channel = TEXT("PawnRigidBody");
    gen21.Response = ECR_Ignore;
    FResponseChannel gen22;
    gen22.Channel = TEXT("ImportantPhysicsActor");
    gen22.Response = ECR_Ignore;
    FResponseChannel gen23;
    gen23.Channel = TEXT("PhysicsPushAway");
    gen23.Response = ECR_Ignore;
    FResponseChannel gen24;
    gen24.Channel = TEXT("VisibilityExplosion");
    gen24.Response = ECR_Ignore;
    FResponseChannel gen25;
    gen25.Channel = TEXT("Water");
    gen25.Response = ECR_Ignore;
    FResponseChannel gen26;
    gen26.Channel = TEXT("PlaceDynamicObject");
    gen26.Response = ECR_Ignore;
    auto gen27 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen27->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen5), MoveTemp(gen6), MoveTemp(gen7), MoveTemp(gen8), MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11), MoveTemp(gen12), MoveTemp(gen13), MoveTemp(gen14), MoveTemp(gen15), MoveTemp(gen16), MoveTemp(gen17), MoveTemp(gen18), MoveTemp(gen19), MoveTemp(gen20), MoveTemp(gen21), MoveTemp(gen22), MoveTemp(gen23), MoveTemp(gen24), MoveTemp(gen25), MoveTemp(gen26)};
}

void UHoudiniStaticMeshComponent::SetMesh(UHoudiniStaticMesh* InMesh) {
}

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible) {
}

void UHoudiniStaticMeshComponent::NotifyMeshUpdated() {
}

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible() const {
    return false;
}

UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh() {
    return nullptr;
}

