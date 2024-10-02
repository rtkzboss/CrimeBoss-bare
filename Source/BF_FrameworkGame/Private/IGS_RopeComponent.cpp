#include "IGS_RopeComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

UIGS_RopeComponent::UIGS_RopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PlayerAttachmentSocketName = TEXT("pelvis_rope_socket");
    (*this).SpeedOfSimulation = 1.000000000e+01f;
    (*this).UpdatedHandsPointsStartTime = 5.000000000e-01f;
    (*this).ActorInterpolationSpeed = 1.000000000e+01f;
    (*this).EndInterpSpeed = 4.000000000e+02f;
    (*this).RopeActorOffset.X = 4.000000000e+01f;
    (*this).RopeLengthOffset = 1.000000000e+02f;
    (*this).IsRollingOffRopeAllowed = true;
    (*this).RollOffDelay = 2.000000000e+00f;
    (*this).EnableVisibilityDelay = 1.000000000e+00f;
    (*this).RollOffSpeed.Min = 8.000000000e+02f;
    (*this).RollOffSpeed.Max = 1.000000000e+03f;
    (*this).PlayerStopUsingVelocityLimit = 9.499999881e-01f;
    (*this).bAttachStart = true;
    (*this).NumSegments = 60;
    (*this).SubstepTime = 1.999999955e-02f;
    (*this).SolverIterations = 4;
    (*this).bEnableStiffness = true;
    (*this).bUseSubstepping = true;
    (*this).CollisionFriction = 2.000000030e-01f;
    (*this).CableGravityScale = 1.000000000e+00f;
    (*this).CableWidth = 3.500000000e+00f;
    (*this).NumSides = 8;
    (*this).TileMaterial = 1.000000000e+00f;
    (*this).RopeType = EIGS_RopeType::RT_Navlink;
    (*this).mR_LockEndParticle = true;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_PhysicsBody;
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Rope");
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Ignore;
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
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Ignore;
    FResponseChannel gen5;
    gen5.Channel = TEXT("WorldDynamic");
    gen5.Response = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("Pawn");
    gen6.Response = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("PhysicsBody");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("Vehicle");
    gen8.Response = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("Destructible");
    gen9.Response = ECR_Ignore;
    FResponseChannel gen10;
    gen10.Channel = TEXT("Bullet");
    gen10.Response = ECR_Ignore;
    FResponseChannel gen11;
    gen11.Channel = TEXT("AIPawn");
    gen11.Response = ECR_Ignore;
    FResponseChannel gen12;
    gen12.Channel = TEXT("Projectile");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("IK");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("Footstep");
    gen14.Response = ECR_Ignore;
    FResponseChannel gen15;
    gen15.Channel = TEXT("VisibilityWorld");
    gen15.Response = ECR_Ignore;
    FResponseChannel gen16;
    gen16.Channel = TEXT("Interactive");
    gen16.Response = ECR_Ignore;
    FResponseChannel gen17;
    gen17.Channel = TEXT("PawnRigidBody");
    gen17.Response = ECR_Ignore;
    FResponseChannel gen18;
    gen18.Channel = TEXT("ImportantPhysicsActor");
    gen18.Response = ECR_Ignore;
    FResponseChannel gen19;
    gen19.Channel = TEXT("PhysicsPushAway");
    gen19.Response = ECR_Ignore;
    FResponseChannel gen20;
    gen20.Channel = TEXT("VisibilityExplosion");
    gen20.Response = ECR_Ignore;
    auto gen21 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen21->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = TArray<FResponseChannel>{gen5, gen6, gen7, gen8, gen9, gen10, gen11, gen12, gen13, gen14, gen15, gen16, gen17, gen18, gen19, gen20};
    (*this).bHiddenInGame = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).SetIsReplicatedByDefault(true);
    (*this).bAutoActivate = true;
}

void UIGS_RopeComponent::SetAttachEndToComponent(USceneComponent* Component, FName SocketName) {
}

void UIGS_RopeComponent::SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName) {
}

void UIGS_RopeComponent::GetCableParticleLocations(TArray<FVector>& Locations) const {
}

USceneComponent* UIGS_RopeComponent::GetAttachedComponent() const {
    return nullptr;
}

AActor* UIGS_RopeComponent::GetAttachedActor() const {
    return nullptr;
}

void UIGS_RopeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_RopeComponent, RopeType);
    DOREPLIFETIME(UIGS_RopeComponent, mR_StartPosition);
    DOREPLIFETIME(UIGS_RopeComponent, mR_EndPosition);
    DOREPLIFETIME(UIGS_RopeComponent, mR_AllowMoveEndPoint);
    DOREPLIFETIME(UIGS_RopeComponent, mR_Limitvelocity);
    DOREPLIFETIME(UIGS_RopeComponent, mR_LockEndParticle);
    DOREPLIFETIME(UIGS_RopeComponent, mR_RollOffRope);
}

