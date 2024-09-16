#include "PaybackAICharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_ShootablePartsHandlerComponent.h"
#include "IGS_AIWorldTracingComponent.h"
#include "IGS_BleedingHandlerComponent.h"
#include "IGS_InteractionStealthKillComponent.h"
#include "IGS_NetworkComponentCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "PaybackAICharactersEventsWatcher.h"

APaybackAICharacter::APaybackAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    auto gen2 = CreateDefaultSubobject<UPaybackAICharactersEventsWatcher>(TEXT("AI Characters Events Watcher"));
    auto gen3 = CreateDefaultSubobject<UIGS_BleedingHandlerComponent>(TEXT("Bleeding Handler Component"));
    auto gen4 = CreateDefaultSubobject<UIGS_AIWorldTracingComponent>(TEXT("AI World Tracing Component"));
    auto gen5 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Aim Assist Capsule"));
    auto gen6 = CreateDefaultSubobject<USphereComponent>(TEXT("Shootable Helmet Collision"));
    auto gen7 = CreateDefaultSubobject<UIGS_InteractionStealthKillComponent>(TEXT("Interaction Stealth Kill"));
    auto gen8 = CreateDefaultSubobject<UIGS_ShootablePartsHandlerComponent>(TEXT("Shootable Parts Handler Component"));
    (*this).NetworkCharacter = gen;
    (*this).AICharactersEventsWatcher = gen2;
    (*this).BleedingComponent = gen3;
    (*this).AIWorldTracingComponent = gen4;
    (*this).AimAssistCapsule = gen5;
    (*this).ShootableHelmetCollision = gen6;
    (*this).ShootableHelmetBoneName = TEXT("head");
    (*this).InteractionStealthKill = gen7;
    (*this).ShootablePartsHandlerComponent = gen8;
    (*this).DownStateHandlerComponent = gen3;
    (*this).bUseControllerRotationYaw = false;
    (*this).AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    (*this).AIControllerClass = nullptr;
    auto gen9 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
    if (gen5) gen5->SetupAttachment(gen9);
    if (gen6) gen6->SetupAttachment(gen9);
    auto gen10 = Cast<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
    if (gen7) gen7->SetupAttachment(gen10);
}

