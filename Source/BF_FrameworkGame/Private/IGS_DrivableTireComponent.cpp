#include "IGS_DrivableTireComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_DrivableTireComponent::UIGS_DrivableTireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bBreakableEnabled = true;
    (*this).TireRimRadius = 2.300000000e+01f;
    (*this).TireHeightChange = 2.500000000e+00f;
    (*this).ChildHeightChange = 7.000000000e+00f;
    (*this).BlowoutScale.X = 1.000000000e+00f;
    (*this).BlowoutScale.Y = 1.000000000e+00f;
    (*this).BlowoutScale.Z = 1.000000000e+00f;
    auto gen = UPrimitiveComponent::StaticClass()->FindPropertyByName("bGenerateOverlapEvents");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_Vehicle;
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Vehicle");
    auto gen4 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen5 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("WorldStatic");
    gen6.Response = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("WorldDynamic");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("PhysicsBody");
    gen8.Response = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("Vehicle");
    gen9.Response = ECR_Ignore;
    FResponseChannel gen10;
    gen10.Channel = TEXT("Destructible");
    gen10.Response = ECR_Ignore;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Ping");
    gen11.Response = ECR_Block;
    FResponseChannel gen12;
    gen12.Channel = TEXT("PawnRigidBody");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("PhysicsPushAway");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("cover");
    gen14.Response = ECR_Block;
    FResponseChannel gen15;
    gen15.Channel = TEXT("Water");
    gen15.Response = ECR_Ignore;
    auto gen16 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen16->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen6), MoveTemp(gen7), MoveTemp(gen8), MoveTemp(gen9), MoveTemp(gen10), MoveTemp(gen11), MoveTemp(gen12), MoveTemp(gen13), MoveTemp(gen14), MoveTemp(gen15)};
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).SetIsReplicated(true);
    (*this).bCanEverAffectNavigation = false;
}

void UIGS_DrivableTireComponent::TireTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_DrivableTireComponent::SetTireAngle(float SpinAngle, float TurnAngle, bool InverseAngle) {
}

void UIGS_DrivableTireComponent::SetBreakable(bool Enabled) {
}

void UIGS_DrivableTireComponent::OnRep_TireDeflated() {
}

bool UIGS_DrivableTireComponent::IsBreakable() {
    return false;
}

void UIGS_DrivableTireComponent::All_StartDeflate_Implementation(bool inDropin) {
}

void UIGS_DrivableTireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_DrivableTireComponent, mR_IsDeflated);
}

