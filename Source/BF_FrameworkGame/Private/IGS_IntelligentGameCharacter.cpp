#include "IGS_IntelligentGameCharacter.h"
#include "IGS_CharacterWieldablesHolderComponent.h"
#include "IGS_SignificanceComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "IGS_AimAssistTargetComponent.h"
#include "IGS_AnimBudgetAllocatorComponent.h"
#include "IGS_CharacterPressureWatcherComponent.h"
#include "IGS_DamageHandlerComponent.h"
#include "IGS_DecalContactShadowComponent.h"
#include "IGS_FallDamageComponent.h"
#include "IGS_FootstepsEventBasedComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_IntelligentGameCharacter::AIGS_IntelligentGameCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_DamageHandlerComponent>(TEXT("DamageHandlerComponent2"))) {
    auto gen = CreateDefaultSubobject<UIGS_SignificanceComponent>(TEXT("SignificanceComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_CharacterWieldablesHolderComponent>(TEXT("CharacterWieldablesHolderComponent"));
    auto gen3 = CreateDefaultSubobject<UIGS_FootstepsEventBasedComponent>(TEXT("FootstepEventBaseComponent"));
    auto gen4 = CreateDefaultSubobject<UIGS_FallDamageComponent>(TEXT("FallDamageComponent"));
    auto gen5 = CreateDefaultSubobject<UArrowComponent>(TEXT("AimAtDirection"));
    auto gen6 = CreateDefaultSubobject<UArrowComponent>(TEXT("LookAtDirection"));
    auto gen7 = CreateDefaultSubobject<UArrowComponent>(TEXT("PawnDirection"));
    auto gen8 = CreateDefaultSubobject<UIGS_AnimBudgetAllocatorComponent>(TEXT("AnimBudgetAllocatorComponent"));
    auto gen9 = CreateDefaultSubobject<UIGS_DecalContactShadowComponent>(TEXT("DecalContactShadowComponent"));
    auto gen10 = CreateDefaultSubobject<UIGS_CharacterPressureWatcherComponent>(TEXT("PressureWatcherComponent"));
    auto gen11 = CreateDefaultSubobject<UIGS_AimAssistTargetComponent>(TEXT("AimAssistTargetComponent"));
    (*this).SignificanceComponent = gen;
    (*this).CharacterWieldablesHolderComponent = gen2;
    (*this).bIsValidForAimAssist = true;
    (*this).ExplorationZoomMagnification = 1.250000000e+00f;
    (*this).ExplorationZoomInSpeedMult = 1.000000000e+00f;
    (*this).ExplorationZoomOutSpeedMult = 1.000000000e+00f;
    (*this).LookAtMaxAngleDeg = 9.000000000e+01f;
    (*this).DoNotReduceWeaponPickupDamageForTeamSides = 1;
    (*this).HeadBoneName = TEXT("head");
    (*this).ChestBoneName = TEXT("spine_03");
    (*this).AimDummySocketName = TEXT("AimRSocket");
    (*this).FootstepEventBaseComponent = gen3;
    (*this).FallDamageComponent = gen4;
    (*this).AimAtArrowComp = gen5;
    (*this).LookAtArrowComp = gen6;
    (*this).PawnDirArrowComp = gen7;
    (*this).AnimBudgetAllocatorComponent = gen8;
    (*this).DecalContactShadowComponent = gen9;
    (*this).PressureWatcherComponent = gen10;
    (*this).AimAssistTargetComponent = gen11;
    (*this).HeadComponentReference.ComponentProperty = TEXT("head");
    (*this).mR_NextRandomAnimationSeed = -1;
    auto gen12 = Cast<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
    if (gen5) gen5->SetupAttachment(gen12);
    if (gen6) gen6->SetupAttachment(gen12);
    if (gen7) gen7->SetupAttachment(gen12);
}

void AIGS_IntelligentGameCharacter::ThrowAwayBag() const {
}

void AIGS_IntelligentGameCharacter::SpawnPocketBag(FTransform InTransform) const {
}

void AIGS_IntelligentGameCharacter::SpawnBag(FTransform InTransform) const {
}

void AIGS_IntelligentGameCharacter::SelectPreviousOrNextWeaponSlot(bool inPrevious) {
}

void AIGS_IntelligentGameCharacter::SelectPreviousOrNextWeaponInActiveSlot(bool inPrevious) {
}

void AIGS_IntelligentGameCharacter::SaveHeadSnapshot() {
}

void AIGS_IntelligentGameCharacter::OverrideHeadComponent(USkeletalMeshComponent* InComponent) {
}

void AIGS_IntelligentGameCharacter::OnRep_AnimationSeed() {
}

void AIGS_IntelligentGameCharacter::OnPostSignificance_Implementation(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue) {
}

void AIGS_IntelligentGameCharacter::MagCheck() const {
}

bool AIGS_IntelligentGameCharacter::IsUsingMountedWeaponAndCanLeave() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsUsingMountedWeapon() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsReloading() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsMagChecking() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsInspecting() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::IsBashing() const {
    return false;
}

void AIGS_IntelligentGameCharacter::InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inIsForce) const {
}

void AIGS_IntelligentGameCharacter::InterruptMagCheck() const {
}

void AIGS_IntelligentGameCharacter::InterruptInspecting() const {
}

void AIGS_IntelligentGameCharacter::InspectWieldable() const {
}

void AIGS_IntelligentGameCharacter::HolsterWeapon() const {
}

UIGS_LootBagComponent* AIGS_IntelligentGameCharacter::GetLootBagComponent() const {
    return nullptr;
}

USkeletalMeshComponent* AIGS_IntelligentGameCharacter::GetHeadComp() {
    return nullptr;
}

UIGS_BleedingHandlerComponent* AIGS_IntelligentGameCharacter::GetBleedingComponent() {
    return nullptr;
}

void AIGS_IntelligentGameCharacter::ForceDestroyZiptieComponent() {
}

void AIGS_IntelligentGameCharacter::DropBag() const {
}

void AIGS_IntelligentGameCharacter::DebugTick_Implementation(float InDeltaTime) {
}

bool AIGS_IntelligentGameCharacter::CanInterruptReload() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::CanInterruptMagCheck() const {
    return false;
}

bool AIGS_IntelligentGameCharacter::CanInterruptInspecting() const {
    return false;
}

void AIGS_IntelligentGameCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_IntelligentGameCharacter, mR_NextRandomAnimationSeed);
}

