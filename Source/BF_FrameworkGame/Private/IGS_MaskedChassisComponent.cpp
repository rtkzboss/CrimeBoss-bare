#include "IGS_MaskedChassisComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_MaskedChassisComponent::UIGS_MaskedChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bBreakableEnabled = true;
    (*this).RearViewMirrorAttachedToSection = -1;
    (*this).RearViewMirrorShaderSlot = 4;
    (*this).LeftSideMirrorShaderSlot = 5;
    (*this).RightSideMirrorShaderSlot = 6;
    (*this).LeftRearViewMirrorSocket = TEXT("DoorLeft_RearView");
    (*this).RightRearViewMirrorSocket = TEXT("DoorRight_RearView");
    (*this).RearViewMirrorSocket = TEXT("RearViewMirror");
    (*this).bUseRadialImpactAnims = true;
    (*this).InRadialDamageMin = 1.000000000e+02f;
    (*this).InRadialDamageMax = 1.000000000e+03f;
    (*this).OutRadialDamageMultiplierMin = 5.000000000e-01f;
    (*this).OutRadialDamageMultiplierMax = 2.000000000e+00f;
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
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).SetIsReplicated(true);
}

void UIGS_MaskedChassisComponent::TriggerCarAlarm() {
}

void UIGS_MaskedChassisComponent::SetBreakable(bool Enabled) {
}

void UIGS_MaskedChassisComponent::OnWindowInstanceBroken(int32 InstanceIndex) {
}

void UIGS_MaskedChassisComponent::OnTirePuncturedUpdate(FVector CurveValue) {
}

void UIGS_MaskedChassisComponent::OnTirePuncturedFinish() {
}

void UIGS_MaskedChassisComponent::OnTirePunctured() {
}

void UIGS_MaskedChassisComponent::OnRep_ChassisState() {
}

void UIGS_MaskedChassisComponent::OnRadialImpactUpdate(FVector CurveValue) {
}

void UIGS_MaskedChassisComponent::OnRadialImpactFinish() {
}

bool UIGS_MaskedChassisComponent::IsBreakable() {
    return false;
}

void UIGS_MaskedChassisComponent::ChassisTakeRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void UIGS_MaskedChassisComponent::ChassisTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UIGS_MaskedChassisComponent::BreakSection(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool& OutSectionState) {
}

void UIGS_MaskedChassisComponent::All_HandleMaskedSection_Implementation(FVector_NetQuantize ImpactPoint, FVector_NetQuantizeNormal ShotFrom) {
}

void UIGS_MaskedChassisComponent::All_BreakSection_Implementation(int32 InVIndex, int32 InDesiredVIndex, int32 InDesiredShaderSlot, FName InDesiredSocketName, TSubclassOf<AActor> InDesiredDebris, bool OutSectionState) {
}

void UIGS_MaskedChassisComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bRearViewMirror);
    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bDoorLeftRearView);
    DOREPLIFETIME(UIGS_MaskedChassisComponent, mR_bDoorRightRearView);
}

