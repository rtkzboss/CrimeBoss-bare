#include "IGS_GlassTempered.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_GlassTempered::UIGS_GlassTempered(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShardSpawnRatio = 2.500000000e+01f;
    (*this).ImpactHoleSize = 2.000000000e+01f;
    (*this).HoleSizeRatioClamp.X = 4.000000060e-01f;
    (*this).HoleSizeRatioClamp.Y = 4.000000000e+00f;
    (*this).RandomHoleRatio.X = 8.000000119e-01f;
    (*this).RandomHoleRatio.Y = 1.200000048e+00f;
    (*this).DamageMax = 1.200000000e+02f;
    (*this).VelocityDamageThreshold = 1.500000000e+03f;
    (*this).RTWidthAndHeight = 64;
    auto gen = UPrimitiveComponent::StaticClass()->FindPropertyByName("bGenerateOverlapEvents");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), false);
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen2->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_Destructible;
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen3->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("BreakableGlassDefault");
    auto gen4 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen5 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Overlap;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Overlap;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen5->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("Visibility");
    gen6.Response = ECR_Ignore;
    FResponseChannel gen7;
    gen7.Channel = TEXT("Vehicle");
    gen7.Response = ECR_Ignore;
    FResponseChannel gen8;
    gen8.Channel = TEXT("Bullet");
    gen8.Response = ECR_Overlap;
    FResponseChannel gen9;
    gen9.Channel = TEXT("Projectile");
    gen9.Response = ECR_Overlap;
    FResponseChannel gen10;
    gen10.Channel = TEXT("Wheels");
    gen10.Response = ECR_Block;
    auto gen11 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen11->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen4->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {MoveTemp(gen6), MoveTemp(gen7), MoveTemp(gen8), MoveTemp(gen9), MoveTemp(gen10)};
    auto gen12 = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen12)->SetPropertyValue(&(*gen12->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_GlassTempered::UpdateRenderTarget() {
}

void UIGS_GlassTempered::Sync_GlassStatus() {
}

void UIGS_GlassTempered::SetCustomMeshes(UStaticMesh* inNewBaseMesh, UStaticMesh* inNewFracturedMesh) {
}

void UIGS_GlassTempered::PrepRenderTarget() {
}

void UIGS_GlassTempered::OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_GlassTempered::OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser) {
}

void UIGS_GlassTempered::OnRep_GlassStatus() {
}

void UIGS_GlassTempered::OnComponentOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void UIGS_GlassTempered::OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void UIGS_GlassTempered::FractureGlass(FVector inHitLocation, FVector2D inHitUV, float inHoleSize) {
}

bool UIGS_GlassTempered::CanDoDamage(FVector inHitLocation) {
    return false;
}

void UIGS_GlassTempered::BreakGlass_Implementation(FVector_NetQuantize10 inHitLocation, FVector_NetQuantizeNormal inFXPushAxis, EIGS_DamageType inDamageType) {
}

void UIGS_GlassTempered::ApplyDamageToGlass_Implementation(FVector_NetQuantize10 inHitLocation, FVector_NetQuantize10 inDamageCauserLocation, EIGS_DamageType inDamageType, float inHoleSize) {
}

void UIGS_GlassTempered::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_GlassTempered, mR_GlassStatus);
}

