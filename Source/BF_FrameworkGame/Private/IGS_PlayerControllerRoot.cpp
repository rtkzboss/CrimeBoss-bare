#include "IGS_PlayerControllerRoot.h"
#include "IGS_InputDeviceDetectorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "ActiveSubControllerHandler.h"
#include "IGS_AimAssistComponent.h"
#include "IGS_PlayerBotOrderComponent.h"
#include "IGS_PlayerDataComponent.h"
#include "IGS_SubControllerHuman.h"
#include "IGS_SubControllerMountable.h"
#include "IGS_SubControllerVehicle.h"

AIGS_PlayerControllerRoot::AIGS_PlayerControllerRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UActiveSubControllerHandler>(TEXT("ActiveSubControllerHandler"));
    auto gen2 = CreateDefaultSubobject<UIGS_SubControllerHuman>(TEXT("SubControllerHuman"));
    auto gen3 = CreateDefaultSubobject<UIGS_SubControllerMountable>(TEXT("SubControllerMountable"));
    auto gen4 = CreateDefaultSubobject<UIGS_SubControllerVehicle>(TEXT("SubControllerVehicle"));
    auto gen5 = CreateDefaultSubobject<USphereComponent>(TEXT("StreamingVolumeInstigator Sphere Collisions"));
    auto gen6 = CreateDefaultSubobject<UIGS_InputDeviceDetectorComponent>(TEXT("InputDeviceDetectorComponent"));
    auto gen7 = CreateDefaultSubobject<UIGS_PlayerDataComponent>(TEXT("PlayerDataComponent"));
    auto gen8 = CreateDefaultSubobject<UIGS_PlayerBotOrderComponent>(TEXT("PlayerBotOrderComponent"));
    auto gen9 = CreateDefaultSubobject<UIGS_AimAssistComponent>(TEXT("AimAssistComponent"));
    (*this).DefaultHUDClass = FSoftObjectPath();
    (*this).bAllowSwitchFireModeInSprint = true;
    (*this).bAllowChangeSlotInSprint = true;
    (*this).bToggleCrouch = true;
    (*this).bGamepadPrioritizeUseInsteadOfReload = true;
    (*this).HoldTimeInSeconds = 2.000000030e-01f;
    (*this).StartHeistHoldTimeInSeconds = 2.000000000e+00f;
    (*this).ContextualDoublePingThresholdInSeconds = 2.500000000e-01f;
    (*this).PingCooldownInSeconds = 1.000000015e-01f;
    (*this).ActiveSubControllerHandler = gen;
    (*this).SubControllerHuman = gen2;
    (*this).SubControllerMountable = gen3;
    (*this).SubControllerVehicle = gen4;
    (*this).m_StreamingVolumeCollision = gen5;
    (*this).m_InputDeviceDetectorComponent = gen6;
    (*this).PlayerDataComponent = gen7;
    (*this).PlayerBotOrderComponent = gen8;
    (*this).m_AimAssistComponent = gen9;
    (*this).m_GivingUpTime = 2.000000000e+00f;
    (*this).HUDReconstructTimePeriod = 2.000000000e+00f;
    (*this).bAttachToPawn = true;
    auto gen10 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("TransformComponent0")));
    if (gen5) gen5->SetupAttachment(gen10);
}

void AIGS_PlayerControllerRoot::TryPossessSpectatedBot() {
}


void AIGS_PlayerControllerRoot::ShowErrorMessage(const FText& inMessageText) const {
}

void AIGS_PlayerControllerRoot::SetShowMainCanvas(bool inShowMainCanvas) const {
}

void AIGS_PlayerControllerRoot::SetIgnoreRadialMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerControllerRoot::SetIgnorePingInput(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::SetIgnoreMenuInput(bool bNewMenuInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreInteractionInput(bool bNewInteractionInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreBotSwapInput(bool bNewBotSwapInput) {
}

void AIGS_PlayerControllerRoot::SetIgnoreAllInput(bool bNewAllInput) {
}

void AIGS_PlayerControllerRoot::Server_UnlockMethodChosen_Implementation(const FGameplayTag inMethod) {
}

void AIGS_PlayerControllerRoot::Server_PossessSpectatedBot_Implementation(AIGS_PlayerCharacter* inPlayerToSpectate) {
}

void AIGS_PlayerControllerRoot::Server_GiveUpInPinnedDownState_Implementation() const {
}
bool AIGS_PlayerControllerRoot::Server_GiveUpInPinnedDownState_Validate() {
    return true;
}

void AIGS_PlayerControllerRoot::ResetIgnoreRadialMenuInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreMenuInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreInteractionInput() {
}

void AIGS_PlayerControllerRoot::ResetIgnoreBotSwapInput() {
}

void AIGS_PlayerControllerRoot::ReleaseHeldKeys() {
}

bool AIGS_PlayerControllerRoot::OpenUnlockMethodMenu(FGameplayTagContainer inMethods) {
    return false;
}

void AIGS_PlayerControllerRoot::OnWheelMenu_Implementation(bool inIsHoldingButton) {
}

void AIGS_PlayerControllerRoot::OnTryToReconstructHUD() {
}

void AIGS_PlayerControllerRoot::OnSystemMenuInput_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnRadialMenuAnalogY_Implementation(float inAxis) {
}

void AIGS_PlayerControllerRoot::OnRadialMenuAnalogX_Implementation(float inAxis) {
}

bool AIGS_PlayerControllerRoot::OnOpenUnlockMenu_Implementation(FGameplayTagContainer inMethods) {
    return false;
}

void AIGS_PlayerControllerRoot::OnOpenTextChatMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnOpenNotepadMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}


void AIGS_PlayerControllerRoot::OnOpenInventoryMenu_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnOpenBotSwitch_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnInputDeviceChanged_Implementation(EIGS_InputDevice inNewInputDevice) {
}

void AIGS_PlayerControllerRoot::OnGameMenuInput_Implementation(bool inIsHoldingButton, EIGS_MenuInputState inInputState) {
}

void AIGS_PlayerControllerRoot::OnDropWieldable_Implementation(bool inIsHoldingButton) {
}

void AIGS_PlayerControllerRoot::OnCloseUnlockMenu_Implementation() {
}



float AIGS_PlayerControllerRoot::OnAddYawInput_Implementation(float inYaw) {
    return 0.000000000e+00f;
}

float AIGS_PlayerControllerRoot::OnAddPitchInput_Implementation(float InPitch) {
    return 0.000000000e+00f;
}

bool AIGS_PlayerControllerRoot::IsUsingKeyboardAndMouse() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsUsingGamepad() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsSpectatingBot() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsSpectating() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsRadialMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsPingInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsMenuInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsInteractionInputIgnored() const {
    return false;
}

bool AIGS_PlayerControllerRoot::IsBotSwapInputIgnored() const {
    return false;
}


float AIGS_PlayerControllerRoot::GetStartHeistHoldTimeInSeconds() const {
    return 0.000000000e+00f;
}

float AIGS_PlayerControllerRoot::GetPingCooldownInSeconds() const {
    return 0.000000000e+00f;
}

float AIGS_PlayerControllerRoot::GetHoldTimeInSeconds() const {
    return 0.000000000e+00f;
}

float AIGS_PlayerControllerRoot::GetDoublePingThresholdInSeconds() const {
    return 0.000000000e+00f;
}

EIGS_InputDevice AIGS_PlayerControllerRoot::GetCurrentInputDeviceType() const {
    return EIGS_InputDevice::ID_KeyboardAndMouse;
}

float AIGS_PlayerControllerRoot::GetContextualDoublePingThresholdInSeconds() {
    return 0.000000000e+00f;
}

UIGS_AimAssistComponent* AIGS_PlayerControllerRoot::GetAimAssistComponent() const {
    return nullptr;
}




void AIGS_PlayerControllerRoot::CloseUnlockMethodMenu() {
}


void AIGS_PlayerControllerRoot::ClientSwitchToSpectator3PVCamera_Implementation(AIGS_GameCharacterFramework* inSpectatorCharacter) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreSuspiciousInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreRealMoveInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientIgnoreAllInput_Implementation(bool bIgnore) {
}

void AIGS_PlayerControllerRoot::ClientFadeScreen_Implementation(bool inIsFadeOut, float inFadeDuration) {
}

void AIGS_PlayerControllerRoot::Client_UnlockMethodChosen_Implementation(const FGameplayTag inMethod) {
}


void AIGS_PlayerControllerRoot::CallBotCommand(EIGS_BotCommandDefinition inCommand) {
}

