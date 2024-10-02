#include "IGS_MaskedChassisComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
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
    (*this).SetGenerateOverlapEvents(false);
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_Vehicle;
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Vehicle");
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    FResponseChannel gen5;
    gen5.Channel = TEXT("WorldStatic");
    gen5.Response = ECR_Ignore;
    FResponseChannel gen6;
    gen6.Channel = TEXT("WorldDynamic");
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
    gen10.Channel = TEXT("Ping");
    FResponseChannel gen11;
    gen11.Channel = TEXT("PawnRigidBody");
    gen11.Response = ECR_Ignore;
    FResponseChannel gen12;
    gen12.Channel = TEXT("ImportantPhysicsActor");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("PhysicsPushAway");
    gen13.Response = ECR_Ignore;
    FResponseChannel gen14;
    gen14.Channel = TEXT("cover");
    FResponseChannel gen15;
    gen15.Channel = TEXT("Water");
    gen15.Response = ECR_Ignore;
    auto gen16 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen16->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = TArray<FResponseChannel>{gen5, gen6, gen7, gen8, gen9, gen10, gen11, gen12, gen13, gen14, gen15};
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).SetIsReplicatedByDefault(true);
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

