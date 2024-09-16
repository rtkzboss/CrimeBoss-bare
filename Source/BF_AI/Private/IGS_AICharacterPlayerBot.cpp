#include "IGS_AICharacterPlayerBot.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_DownStateHandlerComponent.h"
#include "IGS_ListInventory.h"
#include "IGS_LootBagComponent.h"
#include "IGS_LootBagInteractiveComponent.h"
#include "IGS_PlayerDamageHandlerComponent.h"
#include "IGS_PlayerGASComponent.h"
#include "IGS_PlayerLoadoutComponent.h"
#include "IGS_PlayerMetaTransferComponent.h"
#include "IGS_PlayerStatus.h"
#include "IGS_SuppressionHandlerComponent.h"
#include "IGS_NetworkComponentCharacter.h"
#include "Engine/EngineTypes.h"

ADEPRECATED_IGS_AICharacterPlayerBot::ADEPRECATED_IGS_AICharacterPlayerBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_PlayerStatus>(TEXT("Object Status")).SetDefaultSubobjectClass<UIGS_PlayerDamageHandlerComponent>(TEXT("DamageHandlerComponent2")).SetDefaultSubobjectClass<UIGS_PlayerGASComponent>(TEXT("GASComponent"))) {
    auto gen = CreateDefaultSubobject<UIGS_PlayerLoadoutComponent>(TEXT("PlayerLoadoutComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_ListInventory>(TEXT("BotInventory"));
    auto gen3 = CreateDefaultSubobject<UIGS_PlayerMetaTransferComponent>(TEXT("PlayerMetaTransferComponent"));
    auto gen4 = CreateDefaultSubobject<UIGS_SuppressionHandlerComponent>(TEXT("SuppressionHandlerCapsuleComponent"));
    auto gen5 = CreateDefaultSubobject<UIGS_LootBagInteractiveComponent>(TEXT("LootBagInteractiveComponent"));
    auto gen6 = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    auto gen7 = CreateDefaultSubobject<UIGS_LootBagComponent>(TEXT("LootBagComponent"));
    auto gen8 = CreateDefaultSubobject<UIGS_DownStateHandlerComponent>(TEXT("DownStateHandlerComponent"));
    (*this).PlayerLoadoutComponent = gen;
    (*this).BotInventory = gen2;
    (*this).PlayerMetaTransferComponent = gen3;
    (*this).BotSuppressionHandlerComponent = gen4;
    (*this).LootBagInteractiveComponent = gen5;
    (*this).NetworkCharacter = gen6;
    (*this).LootBagComponent = gen7;
    (*this).DownStateHandlerComponent = gen8;
    (*this).bUseControllerRotationYaw = false;
    (*this).AutoPossessAI = EAutoPossessAI::Disabled;
    (*this).AIControllerClass = nullptr;
    auto gen9 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
    if (gen4) gen4->SetupAttachment(gen9);
    if (gen5) gen5->SetupAttachment(gen9);
}

