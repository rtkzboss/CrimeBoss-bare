#include "IGS_WeaponBase.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/ArrowComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "IGS_BasherComponent.h"
#include "IGS_MuzzleFlashHandlerComponent.h"
#include "IGS_WeaponAccuracyComponent.h"
#include "IGS_WeaponDynamicScopeHandler.h"
#include "IGS_WeaponModsHandler.h"
#include "IGS_WeaponRecoilComponent.h"
#include "IGS_WeaponSkinHandler.h"
#include "IGS_WeaponVisibilityHandler.h"
#include "Templates/SubclassOf.h"

AIGS_WeaponBase::AIGS_WeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightModMesh"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DynamicScopeModMesh"));
    auto gen3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibilityModMesh"));
    auto gen4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelModMesh"));
    auto gen5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripModMesh"));
    auto gen6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineModMesh"));
    auto gen7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondMagazineModMesh"));
    auto gen8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockModMesh"));
    auto gen9 = CreateDefaultSubobject<UArrowComponent>(TEXT("LaserArrow"));
    auto gen10 = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlashSpotLight"));
    auto gen11 = CreateDefaultSubobject<UPointLightComponent>(TEXT("FlashPointLight"));
    auto gen12 = CreateDefaultSubobject<UIGS_MuzzleFlashHandlerComponent>(TEXT("Muzzle Flash Handler Component"));
    auto gen13 = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Flash Root"));
    auto gen14 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Muzzle Flash Particle"));
    auto gen15 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Muzzle Flash Cascade Particle"));
    auto gen16 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Barell Smoke Particle"));
    auto gen17 = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light 3PV"));
    auto gen18 = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light FPV"));
    auto gen19 = CreateDefaultSubobject<UPointLightComponent>(TEXT("Muzzle Flash Light FPV Secondary"));
    auto gen20 = CreateDefaultSubobject<UIGS_WeaponAccuracyComponent>(TEXT("WeaponAccuracy"));
    auto gen21 = CreateDefaultSubobject<UIGS_WeaponRecoilComponent>(TEXT("WeaponRecoil"));
    auto gen22 = CreateDefaultSubobject<UIGS_WeaponModsHandler>(TEXT("WeaponModsHandler"));
    auto gen23 = CreateDefaultSubobject<UIGS_WeaponSkinHandler>(TEXT("WeaponSkinHandler"));
    auto gen24 = CreateDefaultSubobject<UIGS_WeaponVisibilityHandler>(TEXT("WeaponVisibilityHandler"));
    auto gen25 = CreateDefaultSubobject<UIGS_WeaponDynamicScopeHandler>(TEXT("WeaponDynamicScopeHandler"));
    auto gen26 = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Basher"));
    (*this).SightModMesh = gen;
    (*this).DynamicScopeMesh = gen2;
    (*this).VisibilityModMesh = gen3;
    (*this).BarrelModMesh = gen4;
    (*this).GripModMesh = gen5;
    (*this).MagazineModMesh = gen6;
    (*this).SecondMagazineModMesh = gen7;
    (*this).StockModMesh = gen8;
    (*this).WeaponModsArray = TArray<UStaticMeshComponent*>{gen, gen2, gen3, gen4, gen5, gen8, gen6, gen7};
    (*this).LaserArrow = gen9;
    (*this).FlashSpotLight = gen10;
    (*this).FlashPointLight = gen11;
    (*this).MuzzleFlashHandlerComponent = gen12;
    (*this).MuzzleFlashRootComponent = gen13;
    (*this).MuzzleFlashParticleComponent = gen14;
    (*this).MuzzleFlashParticleComponentCascade = gen15;
    (*this).BarrelSmokeParticleComponent = gen16;
    (*this).MuzzleFlashLight3PV = gen17;
    (*this).MuzzleFlashLightFPV = gen18;
    (*this).MuzzleFlashLightFPVSecondary = gen19;
    (*this).CanReloadInADS = true;
    (*this).ReloadAfterLastBulletDelay = 2.000000030e-01f;
    (*this).WeaponAccuracy = gen20;
    (*this).WeaponRecoil = gen21;
    (*this).WeaponModsHandler = gen22;
    (*this).WeaponSkinHandler = gen23;
    (*this).WeaponVisibilityHandler = gen24;
    (*this).WeaponDynamicScopeHandler = gen25;
    (*this).PrimaryShooter = EIGS_WeaponAttackType::AT_UNKNOWN;
    (*this).Basher = gen26;
    (*this).VirtualSightSocketName = TEXT("VirtualSight");
    auto gen27 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("WieldableMesh")));
    if (gen) gen->SetupAttachment(gen27);
    if (gen2) gen2->SetupAttachment(gen27);
    if (gen3) gen3->SetupAttachment(gen27);
    if (gen4) gen4->SetupAttachment(gen27);
    if (gen5) gen5->SetupAttachment(gen27);
    if (gen6) gen6->SetupAttachment(gen27);
    if (gen7) gen7->SetupAttachment(gen27);
    if (gen8) gen8->SetupAttachment(gen27);
    if (gen9) gen9->SetupAttachment(gen27);
    if (gen10) gen10->SetupAttachment(gen27);
    if (gen11) gen11->SetupAttachment(gen10);
    if (gen13) gen13->SetupAttachment(gen27);
    if (gen14) gen14->SetupAttachment(gen13);
    if (gen15) gen15->SetupAttachment(gen13);
    if (gen16) gen16->SetupAttachment(gen13);
    if (gen17) gen17->SetupAttachment(gen13);
    if (gen18) gen18->SetupAttachment(gen13);
    if (gen19) gen19->SetupAttachment(gen27);
}

void AIGS_WeaponBase::StopListeningToTrajectoryChanged() {
}

void AIGS_WeaponBase::StopAttack() {
}

void AIGS_WeaponBase::StopAllAttacks() {
}

void AIGS_WeaponBase::SetVisibilityMod(bool inVisible) const {
}

void AIGS_WeaponBase::SetNextShooter() {
}

void AIGS_WeaponBase::OnTrajectoryPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass) {
}

void AIGS_WeaponBase::OnMagazineAmmoChanged_Implementation(int32 inAmmoInMagazine, int32 inMagazineCapacity) {
}

void AIGS_WeaponBase::OnInventoryAmmoChanged_Implementation(int32 inAmmoCount) {
}

bool AIGS_WeaponBase::IsPenetrating() {
    return false;
}

bool AIGS_WeaponBase::IsAttacking() {
    return false;
}

UIGS_WeaponVisibilityHandler* AIGS_WeaponBase::GetWeaponVisibilityHandler() const {
    return nullptr;
}

UIGS_WeaponInventoryObject* AIGS_WeaponBase::GetWeaponInventoryObject() const {
    return nullptr;
}

UIGS_ReloaderBase* AIGS_WeaponBase::GetReloader() const {
    return nullptr;
}

EIGS_WeaponAttackType AIGS_WeaponBase::GetCurrentShooterType() {
    return EIGS_WeaponAttackType::AT_SemiAuto;
}

UIGS_ShooterBase* AIGS_WeaponBase::GetCurrentShooterObject() const {
    return nullptr;
}

void AIGS_WeaponBase::GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const {
}

float AIGS_WeaponBase::GetCurrentReloadTimeMultiplier() const {
    return 0.000000000e+00f;
}

void AIGS_WeaponBase::GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const {
}

int32 AIGS_WeaponBase::GetCurrentMagazineCapacity() const {
    return 0;
}

void AIGS_WeaponBase::GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const {
}

void AIGS_WeaponBase::GetCurrentAttributeMultipliers(float& outWeaponDamageAttrib, float& outHipFireSpreadAttrib, float& outAdsSpreadAttrib, float& outIdleSwayIntensityAttrib, float& outAdsSpeedAttrib, float& outReloadSpeedAttrib) const {
}

void AIGS_WeaponBase::GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const {
}

void AIGS_WeaponBase::GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const {
}

void AIGS_WeaponBase::GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const {
}

void AIGS_WeaponBase::GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const {
}

bool AIGS_WeaponBase::DetermineTortillaUsage(APawn* inPawn) {
    return false;
}

bool AIGS_WeaponBase::CanAttack() const {
    return false;
}

void AIGS_WeaponBase::BeginAttack() {
}

void AIGS_WeaponBase::Bash() {
}

