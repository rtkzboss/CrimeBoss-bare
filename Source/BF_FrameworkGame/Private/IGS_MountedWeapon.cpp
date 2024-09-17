#include "IGS_MountedWeapon.h"
#include "AkComponent.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/BoxComponent.h"
#include "Curves/CurveFloat.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_SimpleReloader.h"
#include "Net/UnrealNetwork.h"

AIGS_MountedWeapon::AIGS_MountedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_AnimatedInteractiveComponentSimple>(TEXT("Interactive"));
    auto gen3 = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractiveBoxComponent"));
    auto gen4 = CreateDefaultSubobject<UTimelineComponent>(TEXT("ReloadTimelineComponent"));
    auto gen5 = CreateDefaultSubobject<UCurveFloat>(TEXT("ReloadCurve"));
    auto gen6 = CreateDefaultSubobject<UIGS_SimpleReloader>(TEXT("Reloader"));
    (*this).UseByAI = true;
    (*this).AIShotsToFire.Min = 30;
    (*this).AIShotsToFire.Max = 40;
    (*this).AIDelayBetweenShots.Min = 3.000000000e+00f;
    (*this).AIDelayBetweenShots.Max = 5.000000000e+00f;
    (*this).AIUseCooldown.Min = 7.000000000e+00f;
    (*this).AIUseCooldown.Max = 1.000000000e+01f;
    (*this).AnimationRotationOffset.Yaw = -1.800000000e+02f;
    (*this).AkComponent = gen;
    (*this).PitchLimit = 4.500000000e+01f;
    (*this).PitchDotLimit = 7.071067691e-01f;
    (*this).YawLimit = 4.500000000e+01f;
    (*this).YawDotLimit = 7.071067691e-01f;
    (*this).InteractiveComponent = gen2;
    (*this).InteractiveBoxComponent = gen3;
    (*this).ReloadTimelineComponent = gen4;
    (*this).ReloadCurve = gen5;
    (*this).Reloader = gen6;
    (*this).DefaultMagazineCount = 3;
    (*this).lastActiveSlot = EIGS_WieldableSlot::S_Unarmed;
    auto gen7 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("SightModMesh")));
    auto gen8 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("DynamicScopeModMesh")));
    auto gen9 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("VisibilityModMesh")));
    auto gen10 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("BarrelModMesh")));
    auto gen11 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("GripModMesh")));
    auto gen12 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("StockModMesh")));
    auto gen13 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("MagazineModMesh")));
    auto gen14 = Cast<UStaticMeshComponent>(GetDefaultSubobjectByName(TEXT("SecondMagazineModMesh")));
    (*this).WeaponModsArray = {gen7, gen8, gen9, gen10, gen11, gen12, gen13, gen14};
    (*this).CanReloadInADS = false;
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).NetDormancy = DORM_Initial;
    auto gen15 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("WieldableMesh")));
    if (gen) gen->SetupAttachment(gen15);
    if (gen2) gen2->SetupAttachment(gen15);
    if (gen3) gen3->SetupAttachment(gen15);
}


void AIGS_MountedWeapon::StopUsing_SERVER_Implementation(bool inIsOwnerAlive) {
}

void AIGS_MountedWeapon::SetDisallowLeave(bool inIsDisallowed) {
}

void AIGS_MountedWeapon::RotateReloadProgress(float InProgress) {
}

void AIGS_MountedWeapon::OnOwnerDeathNative(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo) {
}

void AIGS_MountedWeapon::OnCharacterHolsterFinishedEventNative(bool inIsHolstering) {
}

bool AIGS_MountedWeapon::IsLeaveAllowed() const {
    return false;
}

FVector AIGS_MountedWeapon::GetPawnPosition(AIGS_GameCharacterFramework* charToPosses) {
    return FVector{};
}

void AIGS_MountedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_MountedWeapon, WeaponYaw);
    DOREPLIFETIME(AIGS_MountedWeapon, WeaponPitch);
}

