#include "IGS_BoxSphere.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_CustomBoxComponent.h"
#include "IGS_CustomSphereComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_BoxSphere::AIGS_BoxSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    auto gen2 = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BoxCollision"));
    auto gen3 = CreateDefaultSubobject<UIGS_CustomSphereComponent>(TEXT("SphereCollision"));
    auto gen4 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionEnabled");
    (*gen4->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type>>(&(*this).BodyInstance, 0)) = ECollisionEnabled::QueryOnly;
    (*this).BodyInstance.bLockTranslation = true;
    (*this).BodyInstance.bLockRotation = true;
    auto gen5 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("bInterpolateWhenSubStepping");
    CastField<FBoolProperty>(gen5)->SetPropertyValue(&(*gen5->ContainerPtrToValuePtr<uint8>(&(*this).BodyInstance, 0)), true);
    auto gen6 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen6->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("OverlapAll");
    (*this).BodyInstance.PositionSolverIterationCount = 8;
    (*this).BodyInstance.VelocitySolverIterationCount = 1;
    auto gen7 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen8 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).EngineTraceChannel2 = ECR_Block;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).EngineTraceChannel3 = ECR_Block;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).EngineTraceChannel4 = ECR_Block;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).EngineTraceChannel5 = ECR_Block;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).EngineTraceChannel6 = ECR_Block;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Overlap;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel18 = ECR_Block;
    FResponseChannel gen9;
    gen9.Channel = TEXT("WorldStatic");
    gen9.Response = ECR_Overlap;
    FResponseChannel gen10;
    gen10.Channel = TEXT("WorldDynamic");
    gen10.Response = ECR_Overlap;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Pawn");
    gen11.Response = ECR_Overlap;
    FResponseChannel gen12;
    gen12.Channel = TEXT("Visibility");
    gen12.Response = ECR_Overlap;
    FResponseChannel gen13;
    gen13.Channel = TEXT("Camera");
    gen13.Response = ECR_Overlap;
    FResponseChannel gen14;
    gen14.Channel = TEXT("PhysicsBody");
    gen14.Response = ECR_Overlap;
    FResponseChannel gen15;
    gen15.Channel = TEXT("Vehicle");
    gen15.Response = ECR_Overlap;
    FResponseChannel gen16;
    gen16.Channel = TEXT("Destructible");
    gen16.Response = ECR_Overlap;
    FResponseChannel gen17;
    gen17.Channel = TEXT("Bullet");
    gen17.Response = ECR_Overlap;
    FResponseChannel gen18;
    gen18.Channel = TEXT("AIPawn");
    gen18.Response = ECR_Overlap;
    FResponseChannel gen19;
    gen19.Channel = TEXT("Projectile");
    gen19.Response = ECR_Overlap;
    FResponseChannel gen20;
    gen20.Channel = TEXT("IK");
    gen20.Response = ECR_Overlap;
    FResponseChannel gen21;
    gen21.Channel = TEXT("Footstep");
    gen21.Response = ECR_Overlap;
    FResponseChannel gen22;
    gen22.Channel = TEXT("Ping");
    gen22.Response = ECR_Overlap;
    FResponseChannel gen23;
    gen23.Channel = TEXT("VisibilityWorld");
    gen23.Response = ECR_Overlap;
    FResponseChannel gen24;
    gen24.Channel = TEXT("Sound");
    gen24.Response = ECR_Overlap;
    FResponseChannel gen25;
    gen25.Channel = TEXT("Interactive");
    gen25.Response = ECR_Overlap;
    FResponseChannel gen26;
    gen26.Channel = TEXT("PawnRigidBody");
    gen26.Response = ECR_Overlap;
    FResponseChannel gen27;
    gen27.Channel = TEXT("ImportantPhysicsActor");
    gen27.Response = ECR_Overlap;
    FResponseChannel gen28;
    gen28.Channel = TEXT("PhysicsPushAway");
    gen28.Response = ECR_Overlap;
    FResponseChannel gen29;
    gen29.Channel = TEXT("VisibilityExplosion");
    gen29.Response = ECR_Overlap;
    FResponseChannel gen30;
    gen30.Channel = TEXT("Wheels");
    gen30.Response = ECR_Overlap;
    FResponseChannel gen31;
    gen31.Channel = TEXT("Water");
    gen31.Response = ECR_Overlap;
    FResponseChannel gen32;
    gen32.Channel = TEXT("PlaceDynamicObject");
    gen32.Response = ECR_Overlap;
    auto gen33 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen33->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11), MoveTemp(gen12), MoveTemp(gen13), MoveTemp(gen14), MoveTemp(gen15), MoveTemp(gen16), MoveTemp(gen17), MoveTemp(gen18), MoveTemp(gen19), MoveTemp(gen20), MoveTemp(gen21), MoveTemp(gen22), MoveTemp(gen23), MoveTemp(gen24), MoveTemp(gen25), MoveTemp(gen26), MoveTemp(gen27), MoveTemp(gen28), MoveTemp(gen29), MoveTemp(gen30), MoveTemp(gen31), MoveTemp(gen32)};
    auto gen34 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("MassInKgOverride");
    (*gen34->ContainerPtrToValuePtr<float>(&(*this).BodyInstance, 0)) = 1.000000000e+02f;
    (*this).BodyInstance.LinearDamping = 9.999999776e-03f;
    (*this).BodyInstance.MassScale = 1.000000000e+00f;
    (*this).BodyInstance.InertiaTensorScale.X = 1.000000000e+00f;
    (*this).BodyInstance.InertiaTensorScale.Y = 1.000000000e+00f;
    (*this).BodyInstance.InertiaTensorScale.Z = 1.000000000e+00f;
    (*this).BodyInstance.MaxAngularVelocity = 3.600000000e+03f;
    (*this).BodyInstance.CustomSleepThresholdMultiplier = 1.000000000e+00f;
    (*this).BodyInstance.StabilizationThresholdMultiplier = 1.000000000e+00f;
    (*this).BodyInstance.bEnableGravity = true;
    (*this).BodyInstance.bStartAwake = true;
    (*this).Color.B = 100;
    (*this).Color.G = 255;
    (*this).Color.R = 100;
    (*this).Color.A = 255;
    (*this).bIsActive = true;
    (*this).BoxExtent.X = 4.000000000e+01f;
    (*this).BoxExtent.Y = 4.000000000e+01f;
    (*this).BoxExtent.Z = 4.000000000e+01f;
    (*this).SphereRadius = 4.000000000e+01f;
    (*this).bGenerateOverlapEvents = true;
    (*this).Root = gen;
    (*this).BoxCollisionComponent = gen2;
    (*this).SphereCollisionComponent = gen3;
    (*this).bReplicates = true;
    auto gen35 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen35->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
}

void AIGS_BoxSphere::SetSphereRadius(float InSphereRadius) {
}

void AIGS_BoxSphere::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
}

void AIGS_BoxSphere::SetBoxExtent(FVector InBoxExtent) {
}

void AIGS_BoxSphere::SetActive(bool Inactive) {
}

void AIGS_BoxSphere::OnRep_IsActive() {
}

void AIGS_BoxSphere::OnRep_ExtentOrRadius() {
}

bool AIGS_BoxSphere::IsInShape(FVector InLocation) const {
    return false;
}

bool AIGS_BoxSphere::IsActive() const {
    return false;
}

EIGS_BoxSphereShape AIGS_BoxSphere::GetShapeType() const {
    return EIGS_BoxSphereShape::EBF_Box;
}

bool AIGS_BoxSphere::GetGenerateOverlapEvents() const {
    return false;
}

UShapeComponent* AIGS_BoxSphere::GetCollisionComponent() const {
    return nullptr;
}

void AIGS_BoxSphere::Deactivate() {
}

void AIGS_BoxSphere::Activate() {
}

void AIGS_BoxSphere::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_BoxSphere, bIsActive);
    DOREPLIFETIME(AIGS_BoxSphere, BoxExtent);
    DOREPLIFETIME(AIGS_BoxSphere, SphereRadius);
}

