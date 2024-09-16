#include "IGS_CharacterWieldablesHolderComponent.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"

UIGS_CharacterWieldablesHolderComponent::UIGS_CharacterWieldablesHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CanBeUnholstered = true;
    (*this).InitialSlot = EIGS_WieldableSlot::S_Unarmed;
    (*this).CurrentSlotType = EIGS_WieldableSlot::S_Unarmed;
    (*this).LastSlotType = EIGS_WieldableSlot::S_Unarmed;
    (*this).bIsUnarmed = true;
    FIGS_WieldableSlot gen;
    gen.WieldableActorClass = nullptr;
    gen.InventoryObject = nullptr;
    gen.SlotType = EIGS_WieldableSlot::S_MIN;
    gen.IsLoading = false;
    gen.IsPendingRemoval = false;
    FIGS_WieldableSlot gen2;
    gen2.WieldableActorClass = nullptr;
    gen2.InventoryObject = nullptr;
    gen2.SlotType = EIGS_WieldableSlot::S_SecondaryWeapon;
    gen2.IsLoading = false;
    gen2.IsPendingRemoval = false;
    FIGS_WieldableSlot gen3;
    gen3.WieldableActorClass = nullptr;
    gen3.InventoryObject = nullptr;
    gen3.SlotType = EIGS_WieldableSlot::S_MeleeWeapon;
    gen3.IsLoading = false;
    gen3.IsPendingRemoval = false;
    FIGS_WieldableSlot gen4;
    gen4.WieldableActorClass = nullptr;
    gen4.InventoryObject = nullptr;
    gen4.SlotType = EIGS_WieldableSlot::S_NORMAL_INDEX;
    gen4.IsLoading = false;
    gen4.IsPendingRemoval = false;
    FIGS_WieldableSlot gen5;
    gen5.WieldableActorClass = nullptr;
    gen5.InventoryObject = nullptr;
    gen5.SlotType = EIGS_WieldableSlot::S_CarryableSlot;
    gen5.IsLoading = false;
    gen5.IsPendingRemoval = false;
    FIGS_WieldableSlot gen6;
    gen6.WieldableActorClass = nullptr;
    gen6.InventoryObject = nullptr;
    gen6.SlotType = EIGS_WieldableSlot::S_ExtraSpecialSlot;
    gen6.IsLoading = false;
    gen6.IsPendingRemoval = false;
    (*this).WieldableSlots = {MoveTemp(gen), MoveTemp(gen2), MoveTemp(gen3), MoveTemp(gen4), MoveTemp(gen5), MoveTemp(gen6)};
    (*this).ReduceWeaponDamageForTeamSides = 1;
    FGameplayTag gen7;
    auto gen8 = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen8->ContainerPtrToValuePtr<FName>(&gen7, 0)) = TEXT("Item.Wieldable");
    auto gen9 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen9->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedWieldables, 0)) = {MoveTemp(gen7)};
    auto gen10 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen10->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).AllowedWieldables, 0)) = {0, 1, 2, 1, 0};
}

bool UIGS_CharacterWieldablesHolderComponent::WieldItem(UIGS_WieldableInventoryObjectBase* inInventoryObject) {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::UnsetLocalPlayer() {
}

bool UIGS_CharacterWieldablesHolderComponent::SwapWieldableWithSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType) {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::StartUsingMountedGun(AIGS_WieldableBase* inMountedGun, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_CharacterWieldablesHolderComponent::SetForceHideWeapon(bool bInHide) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectSlot(EIGS_WieldableSlot inSlotType) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectPreviousSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectNextSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectLastSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectBestSlot() {
}

void UIGS_CharacterWieldablesHolderComponent::SelectAnySecondary(bool inFast) {
}

void UIGS_CharacterWieldablesHolderComponent::SelectAnyMelee(bool inFast) {
}

void UIGS_CharacterWieldablesHolderComponent::RemoveWieldableFromSlot(EIGS_WieldableSlot inSlotType) {
}

void UIGS_CharacterWieldablesHolderComponent::Multi_SetForceHideWeapon_Implementation(const bool inHide) {
}

bool UIGS_CharacterWieldablesHolderComponent::IsUnarmed() const {
    return false;
}

void UIGS_CharacterWieldablesHolderComponent::InitializeLocalPlayer(AIGS_PlayerFPVArmsFramework* inOwnerArmsActor) {
}

bool UIGS_CharacterWieldablesHolderComponent::HasFreeSlot() {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::HasAnySecondary() {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::HasAnyMelee() {
    return false;
}

FIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetWieldableForSlot(EIGS_WieldableSlot inSlotType) {
    return FIGS_WieldableSlot{};
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetSlotForWieldableClass(const TSoftClassPtr<AIGS_WieldableBase>& inWieldableClass) const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetSlotForItem(UIGS_WieldableInventoryObjectBase* inItem) const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetLastSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetInitialSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

bool UIGS_CharacterWieldablesHolderComponent::GetForceHideWeapon() const {
    return false;
}

AIGS_WieldableBase* UIGS_CharacterWieldablesHolderComponent::GetCurrentWieldableActor() const {
    return nullptr;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetBestSlot() {
    return EIGS_WieldableSlot::S_MIN;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::GetActiveSlot() const {
    return EIGS_WieldableSlot::S_MIN;
}

void UIGS_CharacterWieldablesHolderComponent::FastUnholster() {
}

void UIGS_CharacterWieldablesHolderComponent::FastSelectSlot(EIGS_WieldableSlot inNewSlot) {
}

void UIGS_CharacterWieldablesHolderComponent::FastHolster(bool inNotifySlotChanged) {
}

bool UIGS_CharacterWieldablesHolderComponent::CanWield(TSubclassOf<UIGS_WieldableInventoryObjectBase> inClass) {
    return false;
}

bool UIGS_CharacterWieldablesHolderComponent::AddWieldableToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlotType) {
    return false;
}

EIGS_WieldableSlot UIGS_CharacterWieldablesHolderComponent::AddWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject) {
    return EIGS_WieldableSlot::S_MIN;
}

bool UIGS_CharacterWieldablesHolderComponent::AddOrSwapWieldable(UIGS_WieldableInventoryObjectBase* inInventoryObject, bool inSelect) {
    return false;
}

