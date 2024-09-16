#include "IGS_GrenadeLauncherProjectileBase.h"
#include "AkComponent.h"
#include "AkSwitchValue.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_GrenadeLauncherProjectileBase::AIGS_GrenadeLauncherProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).ExplosionLight = gen;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen3(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Indoors.SwitchGrp_EnviroSpace-Switch_Indoors"));
    (*this).IndoorsAkSwitch = gen3.Object;
    static ConstructorHelpers::FObjectFinder<UAkSwitchValue> gen4(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Outdoors.SwitchGrp_EnviroSpace-Switch_Outdoors"));
    (*this).OutdoorsAkSwitch = gen4.Object;
    (*this).AkComponent = gen2;
    (*this).LightFlashTime = 2.000000030e-01f;
    (*this).ImpactDistance = 1.500000000e+02f;
    (*this).bMakeNoiseAndEvent = true;
    auto gen5 = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("ThrowableMeshComponent")));
    if (gen) gen->SetupAttachment(gen5);
    if (gen2) gen2->SetupAttachment(gen5);
}

void AIGS_GrenadeLauncherProjectileBase::PlayEffect_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosionSphereTrace_Implementation(AActor* inActor) const {
}

void AIGS_GrenadeLauncherProjectileBase::OnExplosion_Implementation() {
}

void AIGS_GrenadeLauncherProjectileBase::Multicast_ExplodeEffect_Implementation() {
}

bool AIGS_GrenadeLauncherProjectileBase::HasExploded() const {
    return false;
}

float AIGS_GrenadeLauncherProjectileBase::GetOuterEffectRadius() const {
    return 0.000000000e+00f;
}

void AIGS_GrenadeLauncherProjectileBase::Explode() {
}

void AIGS_GrenadeLauncherProjectileBase::AffectPlayer_Implementation(const AIGS_GameCharacterFramework* inPlayer) const {
}

void AIGS_GrenadeLauncherProjectileBase::AffectNPC_Implementation(const AIGS_GameCharacterFramework* inNPC) const {
}

void AIGS_GrenadeLauncherProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_GrenadeLauncherProjectileBase, mR_bIsExploded);
}

