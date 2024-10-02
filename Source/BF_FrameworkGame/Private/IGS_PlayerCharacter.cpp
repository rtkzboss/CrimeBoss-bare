#include "IGS_PlayerCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "IGS_CampThreatMeterComponent.h"
#include "IGS_PostProcessManagerComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "IGS_BasherComponent.h"
#include "IGS_CarryableInteractiveComponent.h"
#include "IGS_DownStateHandlerComponent.h"
#include "IGS_FootstepsPlayerComponent.h"
#include "IGS_GASAttributeSetPlayer.h"
#include "IGS_ListInventory.h"
#include "IGS_LootBagComponent.h"
#include "IGS_LootBagInteractiveComponent.h"
#include "IGS_PlayerCameraComponent.h"
#include "IGS_PlayerCharacterMovementComponent.h"
#include "IGS_PlayerCommandComponent.h"
#include "IGS_PlayerDamageHandlerComponent.h"
#include "IGS_PlayerEffectsComponent.h"
#include "IGS_PlayerGASComponent.h"
#include "IGS_PlayerIgnoreCollisionComponent.h"
#include "IGS_PlayerLoadoutComponent.h"
#include "IGS_PlayerMetaTransferComponent.h"
#include "IGS_PlayerPingComponent.h"
#include "IGS_PlayerStatus.h"
#include "IGS_PlayerSuppressionHandlerComponent.h"
#include "IGS_PlayerSuspicionComponent.h"
#include "IGS_PlayerWorldTracingComponent.h"
#include "IGS_ReviveComponent.h"
#include "IGS_UseComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_PlayerCharacter::AIGS_PlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_PlayerCharacterMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<UIGS_PlayerStatus>(TEXT("Object Status")).SetDefaultSubobjectClass<UIGS_PlayerDamageHandlerComponent>(TEXT("DamageHandlerComponent2")).SetDefaultSubobjectClass<UIGS_PlayerGASComponent>(TEXT("GASComponent")).SetDefaultSubobjectClass<UIGS_GASAttributeSetPlayer>(TEXT("GASAttributeSet")).SetDefaultSubobjectClass<UIGS_FootstepsPlayerComponent>(TEXT("FootstepEventBaseComponent"))) {
    auto gen = CreateDefaultSubobject<UIGS_UseComponent>(TEXT("Use Component"));
    auto gen2 = CreateDefaultSubobject<UIGS_PlayerPingComponent>(TEXT("Ping Component"));
    auto gen3 = CreateDefaultSubobject<UIGS_ReviveComponent>(TEXT("Revive Component"));
    auto gen4 = CreateDefaultSubobject<UIGS_PlayerSuspicionComponent>(TEXT("Player Suspicion Component"));
    auto gen5 = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    auto gen6 = CreateDefaultSubobject<UIGS_PlayerCommandComponent>(TEXT("PlayerCommandComponent"));
    auto gen7 = CreateDefaultSubobject<UIGS_PlayerWorldTracingComponent>(TEXT("AimPoint Updater Component"));
    auto gen8 = CreateDefaultSubobject<UIGS_BasherComponent>(TEXT("Unarmed Melee Basher Component"));
    auto gen9 = CreateDefaultSubobject<UIGS_ListInventory>(TEXT("Player Character List Inventory"));
    auto gen10 = CreateDefaultSubobject<UIGS_PlayerCameraComponent>(TEXT("Camera"));
    auto gen11 = CreateDefaultSubobject<UIGS_PostProcessManagerComponent>(TEXT("PostProcessManagerComponent"));
    auto gen12 = CreateDefaultSubobject<UIGS_PlayerEffectsComponent>(TEXT("PlayerEffectsComponent"));
    auto gen13 = CreateDefaultSubobject<UIGS_PlayerSuppressionHandlerComponent>(TEXT("SuppressionHandlerCapsuleComponent"));
    auto gen14 = CreateDefaultSubobject<UIGS_PlayerIgnoreCollisionComponent>(TEXT("PlayerWithPlayerCollisionHandlerComponent"));
    auto gen15 = CreateDefaultSubobject<UIGS_PlayerLoadoutComponent>(TEXT("PlayerLoadoutComponent"));
    auto gen16 = CreateDefaultSubobject<UIGS_PlayerMetaTransferComponent>(TEXT("PlayerMetaTransferComponent"));
    auto gen17 = CreateDefaultSubobject<UIGS_CampThreatMeterComponent>(TEXT("CampThreatMeterComponent"));
    auto gen18 = CreateDefaultSubobject<UIGS_LootBagInteractiveComponent>(TEXT("LootBagInteractiveComponent"));
    auto gen19 = CreateDefaultSubobject<UIGS_CarryableInteractiveComponent>(TEXT("CarryableInteractiveComponent"));
    auto gen20 = CreateDefaultSubobject<UIGS_LootBagComponent>(TEXT("LootBagComponent"));
    auto gen21 = CreateDefaultSubobject<UIGS_DownStateHandlerComponent>(TEXT("DownStateHandlerComponent"));
    (*this).UseComponent = gen;
    (*this).PingComponent = gen2;
    (*this).ReviveComponent = gen3;
    (*this).PlayerSuspicionComponent = gen4;
    (*this).SpringArmComponent = gen5;
    (*this).PlayerCommandComponent = gen6;
    (*this).PlayerWorldTracingComponent = gen7;
    (*this).UnarmedMeleeBasherComponent = gen8;
    (*this).DefaultAimingChangePercent = 8.000000119e-01f;
    (*this).VisibilityCrouchMultiplier = 5.000000000e-01f;
    (*this).PlayerInventory = gen9;
    (*this).DeathCamUnskippableTime = 1.000000000e+00f;
    (*this).DeathCamMaximumTime = 1.500000000e+01f;
    (*this).bCanSlide = true;
    (*this).bCanUseUnarmedMelee = true;
    (*this).Camera = gen10;
    (*this).DefaultArmsAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Player/Arms/BP_Arms_Fallback.BP_Arms_Fallback_C"), TEXT(""));
    (*this).PostProcessManagerComponent = gen11;
    (*this).PlayerEffectsComponent = gen12;
    (*this).SuppressionHandlerComponent = gen13;
    (*this).PlayerIgnoreCollisionComponent = gen14;
    (*this).PlayerLoadoutComponent = gen15;
    (*this).PlayerMetaTransferComponent = gen16;
    (*this).CampThreatMeterComponent = gen17;
    (*this).LootBagInteractiveComponent = gen18;
    (*this).CarryableInteractiveComponent = gen19;
    (*this).bIsValidForAimAssist = false;
    (*this).LootBagComponent = gen20;
    (*this).bRegisterOnBeginPlay = false;
    (*this).DownStateHandlerComponent = gen21;
    (*this).SquadID = 238028913;
    (*this).CrouchedEyeHeight = 4.800000000e+01f;
    (*this).AutoPossessAI = EAutoPossessAI::Disabled;
    (*this).AIControllerClass = nullptr;
    auto gen22 = Cast<USkeletalMeshComponentBudgeted>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
    if (gen3) gen3->SetupAttachment(gen22);
    auto gen23 = Cast<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
    if (gen5) gen5->SetupAttachment(gen23);
    if (gen10) gen10->SetupAttachment(gen23);
    if (gen13) gen13->SetupAttachment(gen22);
    if (gen18) gen18->SetupAttachment(gen22);
    if (gen19) gen19->SetupAttachment(gen22);
}

void AIGS_PlayerCharacter::Use(bool inIsHolding) {
}

void AIGS_PlayerCharacter::UpdateSpectatingCam(bool inIsSpectating) {
}

void AIGS_PlayerCharacter::UnarmedMeleeAttack() {
}


void AIGS_PlayerCharacter::SwitchToDeathCamera_Implementation() {
}




void AIGS_PlayerCharacter::ShowChatWheelIcon_Implementation(const FText& inIconText) {
}

void AIGS_PlayerCharacter::Shout(bool inIsHolding) {
}

void AIGS_PlayerCharacter::SetShowPlayerOutline(bool inShowPlayerOutline) {
}

void AIGS_PlayerCharacter::SetRandomVoiceAccordingToEthnicityAndGender() {
}

void AIGS_PlayerCharacter::SetPlayerVisibility_Implementation(bool inVisible) {
}

void AIGS_PlayerCharacter::SetIsInInteraction(const bool InValue) {
}

void AIGS_PlayerCharacter::SetIsInElevator(const bool InValue) {
}

void AIGS_PlayerCharacter::SetIgnoreRoomSecurityOffence(bool inIgnore) const {
}

void AIGS_PlayerCharacter::SetIgnoreRadialMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerCharacter::SetIgnorePingInput(bool bIgnore) {
}

void AIGS_PlayerCharacter::SetIgnoreMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerCharacter::SetIgnoreLockpickInput(bool bIgnore) {
}

void AIGS_PlayerCharacter::SetIgnoreInteractionInput(bool bNewInteractionInput) {
}

void AIGS_PlayerCharacter::SetIgnoreBotSwapInput(bool bNewBotSwapInput) {
}

void AIGS_PlayerCharacter::SetFaceRotation(FRotator NewControlRotation) {
}

void AIGS_PlayerCharacter::SetArmsTortillaEffect(float InValue) {
}

void AIGS_PlayerCharacter::SetArmsHidden(bool inHidden) {
}

void AIGS_PlayerCharacter::Server_Shout_Implementation(FShoutScanData inScanData) {
}
bool AIGS_PlayerCharacter::Server_Shout_Validate(FShoutScanData inScanData) {
    return true;
}

void AIGS_PlayerCharacter::Server_RequestStopCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Server_RequestPlayCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Server_RefreshUnarmedMeleeSetup_Implementation() {
}

void AIGS_PlayerCharacter::Server_ProxyEnterCameraFeed_Implementation() {
}
bool AIGS_PlayerCharacter::Server_ProxyEnterCameraFeed_Validate() {
    return true;
}

void AIGS_PlayerCharacter::Server_PerformStealthTakedown_Implementation(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_PlayerCharacter::Server_OnInteractionEnded_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool AIGS_PlayerCharacter::Server_OnInteractionEnded_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void AIGS_PlayerCharacter::Server_OnInteracting_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}
bool AIGS_PlayerCharacter::Server_OnInteracting_Validate(UIGS_InteractiveComponent* inInteractiveComponent) {
    return true;
}

void AIGS_PlayerCharacter::Server_OnBagCountChanged_Implementation(int32 inCount) {
}
bool AIGS_PlayerCharacter::Server_OnBagCountChanged_Validate(int32 inCount) {
    return true;
}

void AIGS_PlayerCharacter::Server_HandleSpectating_Implementation() {
}
bool AIGS_PlayerCharacter::Server_HandleSpectating_Validate() {
    return true;
}

void AIGS_PlayerCharacter::Server_AbilityUnequip_Implementation() {
}
bool AIGS_PlayerCharacter::Server_AbilityUnequip_Validate() {
    return true;
}

void AIGS_PlayerCharacter::ResetIgnoreRadialMenuInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreMenuInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreInteractionInput() {
}

void AIGS_PlayerCharacter::ResetIgnoreBotSwapInput() {
}

void AIGS_PlayerCharacter::ProxyEnterCameraFeed(AIGS_SecurityCameraViewer* InViewer) {
}


void AIGS_PlayerCharacter::Ping() const {
}

void AIGS_PlayerCharacter::OwnerUnpossess_Implementation() {
}

void AIGS_PlayerCharacter::OwnerPossess_Implementation() {
}

void AIGS_PlayerCharacter::OnPlayerStateChanged_Implementation(AIGS_PlayerStateGame* inPlayerState) {
}

void AIGS_PlayerCharacter::OnPerkPickedUpRPC_Implementation(UClass* inClass) {
}

void AIGS_PlayerCharacter::OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult) const {
}

void AIGS_PlayerCharacter::NotifyDeathCameraSkippable() {
}

void AIGS_PlayerCharacter::NotifyDeathCameraEnded() {
}

void AIGS_PlayerCharacter::Multicast_RequestStopCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Multicast_RequestPlayCustomMontage_Implementation(FGameplayTag inCustomAnimType) {
}

void AIGS_PlayerCharacter::Multicast_PlayZiptieMountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayZiptieDismountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelSlowDownEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelMountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_PlayRappelDismountEvent_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_OnInteractionEnded_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}

void AIGS_PlayerCharacter::Multicast_OnInteracting_Implementation(UIGS_InteractiveComponent* inInteractiveComponent) {
}

void AIGS_PlayerCharacter::Multicast_OnBagCountChanged_Implementation(int32 inCount) {
}

void AIGS_PlayerCharacter::Multicast_DeathSoundEffect_Implementation() {
}

void AIGS_PlayerCharacter::Multicast_CheatChangeSize_Implementation(float InSize) {
}

void AIGS_PlayerCharacter::MessageToServer_LadderInput_Implementation(FIGS_ReplicatedLadder inLadderData) {
}
bool AIGS_PlayerCharacter::MessageToServer_LadderInput_Validate(FIGS_ReplicatedLadder inLadderData) {
    return true;
}

void AIGS_PlayerCharacter::LeaveLadder() const {
}

void AIGS_PlayerCharacter::JumpFromLadder() const {
}

bool AIGS_PlayerCharacter::IsUsingVehicle() const {
    return false;
}

bool AIGS_PlayerCharacter::IsUsingBuzzsaw() const {
    return false;
}

bool AIGS_PlayerCharacter::IsThirdPersonCamActive() {
    return false;
}

bool AIGS_PlayerCharacter::IsSlidingOnZipline() const {
    return false;
}

bool AIGS_PlayerCharacter::IsSliding() const {
    return false;
}

bool AIGS_PlayerCharacter::IsRappelling() const {
    return false;
}

bool AIGS_PlayerCharacter::IsRadialMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsPingInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsOnLadder() const {
    return false;
}

bool AIGS_PlayerCharacter::IsMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInVentShaft() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInteractionInputIgnored() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInInteraction() const {
    return false;
}

bool AIGS_PlayerCharacter::IsInElevator() const {
    return false;
}

bool AIGS_PlayerCharacter::IsFalling() const {
    return false;
}

bool AIGS_PlayerCharacter::IsBotSwapInputIgnored() const {
    return false;
}

void AIGS_PlayerCharacter::HandleSpectating() {
}

EIGS_DialogueHeisterCharacter AIGS_PlayerCharacter::GetVoiceAccordingToEthnicityAndGender(UIGS_EthnicityVoices* inEthnicityVoices, EIGS_Ethnicity inEthnicity, bool inIsFemale) {
    return EIGS_DialogueHeisterCharacter::None;
}

AIGS_RideableVehicleBaseFramework* AIGS_PlayerCharacter::GetUsedVehicle() const {
    return nullptr;
}

bool AIGS_PlayerCharacter::GetShowPlayerOutline() {
    return false;
}

UIGS_PlayerCommandComponent* AIGS_PlayerCharacter::GetPlayerCommandComponent() const {
    return nullptr;
}

UIGS_PlayerCharacterMovementComponent* AIGS_PlayerCharacter::GetPlayerCharacterMovementComponent() {
    return nullptr;
}

UIGS_PlayerCameraComponent* AIGS_PlayerCharacter::GetPlayerCamera() const {
    return nullptr;
}

bool AIGS_PlayerCharacter::GetIsAimingAtFriendly() const {
    return false;
}

bool AIGS_PlayerCharacter::GetIsAimingAtEnemy() const {
    return false;
}

EIGS_Ethnicity AIGS_PlayerCharacter::GetEthnicityFromMutable(UCustomizableSkeletalComponent* inCSCBody) {
    return EIGS_Ethnicity::White;
}

EIGS_TeamSideEnum AIGS_PlayerCharacter::GetAimingAtTeamside() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

EIGS_TeamSideEnum AIGS_PlayerCharacter::GetAimAtTeam() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

AIGS_GameCharacterFramework* AIGS_PlayerCharacter::GetAimAtCharacter() const {
    return nullptr;
}

AActor* AIGS_PlayerCharacter::GetAimAtActor() const {
    return nullptr;
}

float AIGS_PlayerCharacter::GetAbilityRechargeMult() const {
    return 0.000000000e+00f;
}

int32 AIGS_PlayerCharacter::GetAbility1ChargeCount() const {
    return 0;
}

void AIGS_PlayerCharacter::ForceCancelHoldInputs() {
}

void AIGS_PlayerCharacter::ForceAndUseInteraction(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::ForceAndUseClientInteraction(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::EnableSpectateCamera_Implementation() {
}

void AIGS_PlayerCharacter::DoMantle() const {
}

void AIGS_PlayerCharacter::DisableSpectateCamera_Implementation() {
}

void AIGS_PlayerCharacter::DisableDeathCam_Implementation() {
}

void AIGS_PlayerCharacter::Client_ForceUseInteraction_Implementation(UIGS_InteractiveComponent* inInteraction) {
}

void AIGS_PlayerCharacter::Client_CameraSpy_Implementation(AIGS_SecurityCameraViewer* inCamera) {
}
bool AIGS_PlayerCharacter::Client_CameraSpy_Validate(AIGS_SecurityCameraViewer* inCamera) {
    return true;
}

void AIGS_PlayerCharacter::Client_AddItemsAfterSwitch_Implementation(const TArray<TSubclassOf<UIGS_InventoryObjectFramework>>& inItems) {
}

void AIGS_PlayerCharacter::Client_AddItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd) {
}

bool AIGS_PlayerCharacter::CanMoveOnLadder() const {
    return false;
}

void AIGS_PlayerCharacter::CancelAndRemoveAbility1() {
}

void AIGS_PlayerCharacter::CallOnChangeShowPredictionWithTransform(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass, AIGS_WeaponBase* inWeapon) {
}

void AIGS_PlayerCharacter::CallOnChangeShowPrediction(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass) {
}

void AIGS_PlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_PlayerCharacter, R_Yaw);
}

