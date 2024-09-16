#include "IGS_GrenadeProjectileBase.h"
#include "AkComponent.h"
#include "AkSwitchValue.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeProjectileBase::AIGS_GrenadeProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    auto gen2 = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Grenade Indicator Widget"));
    auto gen3 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).ExplosionLight = gen;
    (*this).GrenadeIndicatorWidget = gen2;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen4(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Indoors.SwitchGrp_EnviroSpace-Switch_Indoors"));
    (*this).IndoorsAkSwitch = gen4.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen5(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Outdoors.SwitchGrp_EnviroSpace-Switch_Outdoors"));
    (*this).OutdoorsAkSwitch = gen5.Object;
    (*this).AkComponent = gen3;
    (*this).IndicatorAppearTime = 3.330000043e-01f;
    (*this).LightFlashTime = 2.000000030e-01f;
    (*this).ImpactDistance = 1.500000000e+02f;
    (*this).bMakeNoiseAndEvent = true;
    auto gen6 = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("ThrowableMeshComponent")));
    if (gen) gen->SetupAttachment(gen6);
    if (gen2) gen2->SetupAttachment(gen6);
    if (gen3) gen3->SetupAttachment(gen6);
}

void AIGS_GrenadeProjectileBase::SetIndicatorIconWidget() const {
}

void AIGS_GrenadeProjectileBase::PlayEffect_Implementation() {
}


void AIGS_GrenadeProjectileBase::OnExplosionSphereTrace_Implementation(AActor* inActor) const {
}

void AIGS_GrenadeProjectileBase::OnExplosion_Implementation() {
}

void AIGS_GrenadeProjectileBase::Multicast_ExplodeEffect_Implementation() {
}

bool AIGS_GrenadeProjectileBase::HasExploded() const {
    return false;
}

float AIGS_GrenadeProjectileBase::GetOuterEffectRadius() const {
    return 0.000000000e+00f;
}

void AIGS_GrenadeProjectileBase::Explode() {
}

void AIGS_GrenadeProjectileBase::AffectPlayer_Implementation(const AIGS_GameCharacterFramework* inPlayer) const {
}

void AIGS_GrenadeProjectileBase::AffectNPC_Implementation(const AIGS_GameCharacterFramework* inNPC) const {
}

void AIGS_GrenadeProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_GrenadeProjectileBase, mR_bIsExploded);
}

