#include "IGS_NetworkComponentCharacter.h"
#include "EIGS_ItemType.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UIGS_NetworkComponentCharacter::UIGS_NetworkComponentCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).mR_ShooterType = EIGS_WeaponAttackType::AT_UNKNOWN;
    FIGS_WieldableReplicatedData gen;
    gen.UniqueId = 0;
    gen.TableIndex = -1;
    gen.Slot = EIGS_WieldableSlot::S_MIN;
    gen.ItemType = EIGS_ItemType::Item_UNKNOWN;
    gen.WeaponSkin = FSoftObjectPath();
    gen.WeaponDefinition = nullptr;
    gen.DefaultWeaponSkin = FSoftObjectPath();
    gen.Mods = {};
    gen.UniversalData.bUseDefaultValues = true;
    gen.UniversalData.bUseCustomName = false;
    gen.UniversalData.UniversalBool_1 = false;
    gen.UniversalData.UniversalBool_2 = false;
    gen.UniversalData.UniversalBool_3 = false;
    gen.UniversalData.UniversalInt_1 = 0;
    gen.UniversalData.UniversalInt_2 = 0;
    gen.UniversalData.UniversalInt_3 = 0;
    gen.UniversalData.UniversalInt_4 = 0;
    gen.UniversalData.UniversalInt_5 = 0;
    gen.UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    gen.UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    gen.UniversalData.UniversalText_1 = FText::GetEmpty();
    FIGS_WieldableReplicatedData gen2;
    gen2.UniqueId = 0;
    gen2.TableIndex = -1;
    gen2.Slot = EIGS_WieldableSlot::S_SecondaryWeapon;
    gen2.ItemType = EIGS_ItemType::Item_UNKNOWN;
    gen2.WeaponSkin = FSoftObjectPath();
    gen2.WeaponDefinition = nullptr;
    gen2.DefaultWeaponSkin = FSoftObjectPath();
    gen2.Mods = {};
    gen2.UniversalData.bUseDefaultValues = true;
    gen2.UniversalData.bUseCustomName = false;
    gen2.UniversalData.UniversalBool_1 = false;
    gen2.UniversalData.UniversalBool_2 = false;
    gen2.UniversalData.UniversalBool_3 = false;
    gen2.UniversalData.UniversalInt_1 = 0;
    gen2.UniversalData.UniversalInt_2 = 0;
    gen2.UniversalData.UniversalInt_3 = 0;
    gen2.UniversalData.UniversalInt_4 = 0;
    gen2.UniversalData.UniversalInt_5 = 0;
    gen2.UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    gen2.UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    gen2.UniversalData.UniversalText_1 = FText::GetEmpty();
    FIGS_WieldableReplicatedData gen3;
    gen3.UniqueId = 0;
    gen3.TableIndex = -1;
    gen3.Slot = EIGS_WieldableSlot::S_NORMAL_INDEX;
    gen3.ItemType = EIGS_ItemType::Item_UNKNOWN;
    gen3.WeaponSkin = FSoftObjectPath();
    gen3.WeaponDefinition = nullptr;
    gen3.DefaultWeaponSkin = FSoftObjectPath();
    gen3.Mods = {};
    gen3.UniversalData.bUseDefaultValues = true;
    gen3.UniversalData.bUseCustomName = false;
    gen3.UniversalData.UniversalBool_1 = false;
    gen3.UniversalData.UniversalBool_2 = false;
    gen3.UniversalData.UniversalBool_3 = false;
    gen3.UniversalData.UniversalInt_1 = 0;
    gen3.UniversalData.UniversalInt_2 = 0;
    gen3.UniversalData.UniversalInt_3 = 0;
    gen3.UniversalData.UniversalInt_4 = 0;
    gen3.UniversalData.UniversalInt_5 = 0;
    gen3.UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    gen3.UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    gen3.UniversalData.UniversalText_1 = FText::GetEmpty();
    FIGS_WieldableReplicatedData gen4;
    gen4.UniqueId = 0;
    gen4.TableIndex = -1;
    gen4.Slot = EIGS_WieldableSlot::S_CarryableSlot;
    gen4.ItemType = EIGS_ItemType::Item_UNKNOWN;
    gen4.WeaponSkin = FSoftObjectPath();
    gen4.WeaponDefinition = nullptr;
    gen4.DefaultWeaponSkin = FSoftObjectPath();
    gen4.Mods = {};
    gen4.UniversalData.bUseDefaultValues = true;
    gen4.UniversalData.bUseCustomName = false;
    gen4.UniversalData.UniversalBool_1 = false;
    gen4.UniversalData.UniversalBool_2 = false;
    gen4.UniversalData.UniversalBool_3 = false;
    gen4.UniversalData.UniversalInt_1 = 0;
    gen4.UniversalData.UniversalInt_2 = 0;
    gen4.UniversalData.UniversalInt_3 = 0;
    gen4.UniversalData.UniversalInt_4 = 0;
    gen4.UniversalData.UniversalInt_5 = 0;
    gen4.UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    gen4.UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    gen4.UniversalData.UniversalText_1 = FText::GetEmpty();
    FIGS_WieldableReplicatedData gen5;
    gen5.UniqueId = 0;
    gen5.TableIndex = -1;
    gen5.Slot = EIGS_WieldableSlot::S_ExtraSpecialSlot;
    gen5.ItemType = EIGS_ItemType::Item_UNKNOWN;
    gen5.WeaponSkin = FSoftObjectPath();
    gen5.WeaponDefinition = nullptr;
    gen5.DefaultWeaponSkin = FSoftObjectPath();
    gen5.Mods = {};
    gen5.UniversalData.bUseDefaultValues = true;
    gen5.UniversalData.bUseCustomName = false;
    gen5.UniversalData.UniversalBool_1 = false;
    gen5.UniversalData.UniversalBool_2 = false;
    gen5.UniversalData.UniversalBool_3 = false;
    gen5.UniversalData.UniversalInt_1 = 0;
    gen5.UniversalData.UniversalInt_2 = 0;
    gen5.UniversalData.UniversalInt_3 = 0;
    gen5.UniversalData.UniversalInt_4 = 0;
    gen5.UniversalData.UniversalInt_5 = 0;
    gen5.UniversalData.UniversalFloat_1 = 0.000000000e+00f;
    gen5.UniversalData.UniversalFloat_2 = 0.000000000e+00f;
    gen5.UniversalData.UniversalText_1 = FText::GetEmpty();
    (*this).mR_AvailableWieldables = {MoveTemp(gen), MoveTemp(gen2), FIGS_WieldableReplicatedData{}, MoveTemp(gen3), MoveTemp(gen4), MoveTemp(gen5)};
    (*this).m_OwningInventoryObjects = {nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};
    (*this).mR_CurrentSlot = EIGS_WieldableSlot::S_Unarmed;
    (*this).VoiceExpressionEnabled = true;
    (*this).NearDeathHealthPercentage = 4.000000060e-01f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    auto gen6 = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen6)->SetPropertyValue(&(*gen6->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_NetworkComponentCharacter::StopVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::SetUniversalDataByItemID(int32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}

void UIGS_NetworkComponentCharacter::Set2DModeEnabled(bool inState) {
}

void UIGS_NetworkComponentCharacter::PlayVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::OnWieldableRemoved(EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnWieldableAddedToSlot(UIGS_WieldableInventoryObjectBase* inInventoryObject, EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnSlotChanged(EIGS_WieldableSlot inSlot) {
}

void UIGS_NetworkComponentCharacter::OnRep_ShooterType() {
}

void UIGS_NetworkComponentCharacter::OnRep_RequestLeadSide() const {
}

void UIGS_NetworkComponentCharacter::OnRep_ReplicatedLadder() const {
}

void UIGS_NetworkComponentCharacter::OnRep_ReplicatedAcceleration() const {
}

void UIGS_NetworkComponentCharacter::OnRep_PlayingAnimations() {
}

void UIGS_NetworkComponentCharacter::OnRep_MovementSpeed() const {
}

void UIGS_NetworkComponentCharacter::OnRep_LootBagInfo(FIGS_BagInfo inOldInfo) const {
}

void UIGS_NetworkComponentCharacter::OnRep_LookAtPoint() const {
}

void UIGS_NetworkComponentCharacter::OnRep_LeaningDirection() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsVisibilityModOn() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsRunningAttack() {
}

void UIGS_NetworkComponentCharacter::OnRep_IsMovingForced() const {
}

void UIGS_NetworkComponentCharacter::OnRep_IsMantling() const {
}

void UIGS_NetworkComponentCharacter::OnRep_CurrentSlot() {
}

void UIGS_NetworkComponentCharacter::OnRep_CharacterState() const {
}

void UIGS_NetworkComponentCharacter::OnRep_CharacterAiming() const {
}

void UIGS_NetworkComponentCharacter::OnRep_AvailableWieldables() {
}

void UIGS_NetworkComponentCharacter::OnRep_AimAtPoint() const {
}

void UIGS_NetworkComponentCharacter::OnExpressionVoiceDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void UIGS_NetworkComponentCharacter::OnCurrentlyFilledBagChanged() {
}

void UIGS_NetworkComponentCharacter::Multicast_RequestAnimationTaskTag_Implementation(FGameplayTag inMontageTag, float inRequestedDuration, int32 inRandomSeed) {
}

void UIGS_NetworkComponentCharacter::Multicast_AnimationTaskCanceledTag_Implementation(FGameplayTag inMontageTag, EIGS_AnimationTaskFinishedReason inCancelReason, int32 inRandomSeed) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_WeaponMagCheckInterrupt_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_WeaponMagCheck_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToServer_UpdateAvailableWieldables_Implementation(const TArray<FIGS_WieldableReplicatedData>& inWieldables) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_UpdateAvailableWieldables_Validate(const TArray<FIGS_WieldableReplicatedData>& inWieldables) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ToggleVisibility_Implementation(bool inVisible) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ToggleVisibility_Validate(bool inVisible) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inSpawnLocation, const FQuat& inSpawnRotation, bool inThrowLow, float inTimeHeldInHand) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ThrowThrowable_Validate(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inSpawnLocation, const FQuat& inSpawnRotation, bool inThrowLow, float inTimeHeldInHand) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowAwayItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ThrowAwayItem_Validate(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ThrowAwayBag_Implementation(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform, bool inThrow) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_StopAttack_Implementation() {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_StopAttack_Validate() {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SpawnMovingProjectile_Implementation(const FTransform& inSpawnTransform) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_SpawnMovingProjectile_Validate(const FTransform& inSpawnTransform) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SpawnBag_Implementation(FIGS_LootBagItemHolder inLootBagInfo, FTransform InTransform) {
}

void UIGS_NetworkComponentCharacter::MessageToServer_Shoot_Implementation(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_Shoot_Validate(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetRequestedLeanSide_Implementation(EIGS_LeanSide inRequestedLeanSide) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_SetRequestedLeanSide_Validate(EIGS_LeanSide inRequestedLeanSide) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetMovementSpeed_Implementation(EIGS_Speed inMovementSpeed) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_SetMovementSpeed_Validate(EIGS_Speed inMovementSpeed) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetLeaningDirection_Implementation(EIGS_CharacterLeaningDirectionEnum inLeaningDirection) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_SetLeaningDirection_Validate(EIGS_CharacterLeaningDirectionEnum inLeaningDirection) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_SetCurrentSlot_Implementation(EIGS_WieldableSlot inSlot) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_SetCurrentSlot_Validate(EIGS_WieldableSlot inSlot) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_Reload_Implementation(bool inIsCombat, bool inIsEmptyMagazine) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_Reload_Validate(bool inIsCombat, bool inIsEmptyMagazine) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_PocketLootClear_Implementation() {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_PocketLootClear_Validate() {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_PocketLootAdded_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inPocketLoot) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_PocketLootAdded_Validate(TSubclassOf<UIGS_InventoryObjectFramework> inPocketLoot) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_PlantThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inPlantLocation, const FRotator& inPlantRotation) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_PlantThrowable_Validate(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass, const FVector& inPlantLocation, const FRotator& inPlantRotation) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowStart_Implementation(bool inThrowLow) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnThrowStart_Validate(bool inThrowLow) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowFinish_Implementation(bool inThrowLow) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnThrowFinish_Validate(bool inThrowLow) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnThrowCancel_Implementation(bool inThrowLow) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnThrowCancel_Validate(bool inThrowLow) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnPlayerSpecialAction_Implementation(EIGS_SpecialActionType inType) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnPlayerSpecialAction_Validate(EIGS_SpecialActionType inType) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnLootBagCountChanged_Implementation(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnLootBagCountChanged_Validate(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_OnCurrentLootBagChanged_Implementation(const TArray<FIGS_LootBagInfo>& inBagInfos) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_OnCurrentLootBagChanged_Validate(const TArray<FIGS_LootBagInfo>& inBagInfos) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_NotifyHitBash_Implementation(const FIGS_BashResultNetwork& inBashData) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_NotifyHitBash_Validate(const FIGS_BashResultNetwork& inBashData) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_NotifyHit_Implementation(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_NotifyHit_Validate(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_MeleeAttack_Implementation(EIGS_MeleeAttackType inMeleeAttackType) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_MeleeAttack_Validate(EIGS_MeleeAttackType inMeleeAttackType) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ItemRemoved_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ItemRemoved_Validate(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ItemAdded_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ItemAdded_Validate(TSubclassOf<UIGS_InventoryObjectFramework> inClass, uint32 inID, FIGS_InventoryObjectUniversalData inUniversalData) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_InventoryCleared_Implementation() {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_InventoryCleared_Validate() {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_InterruptReload_Implementation(EIGS_ReloadInterruptReasonEnum inInterruptReason, bool inImmediateInterrupt) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_InterruptReload_Validate(EIGS_ReloadInterruptReasonEnum inInterruptReason, bool inImmediateInterrupt) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ExplodedInHand_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ExplodedInHand_Validate(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_DropDownItem_Implementation(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_DropDownItem_Validate(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObjectClass, TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, const TSoftObjectPtr<UIGS_WeaponSkinData>& inWeaponSkin, FIGS_InventoryObjectUniversalData inUniversalData, FTransform InTransform, const TSoftClassPtr<AIGS_PickupActorBase>& inCustomPickupClass) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_DetonateThrowable_Implementation(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_DetonateThrowable_Validate(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableObjectClass) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_CharacterAim_Implementation(bool inIsAiming, float inAimInSpeedMult, float inAimOutSpeedMult) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_CharacterAim_Validate(bool inIsAiming, float inAimInSpeedMult, float inAimOutSpeedMult) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_ChangeShooter_Implementation(EIGS_WeaponAttackType inAttackType) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_ChangeShooter_Validate(EIGS_WeaponAttackType inAttackType) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_BeginAttack_Implementation() {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_BeginAttack_Validate() {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToServer_AdvancedMovementEvent_Implementation(EIGS_AdvancedMovementEvent inAdvancedMovementEvent) {
}
bool UIGS_NetworkComponentCharacter::MessageToServer_AdvancedMovementEvent_Validate(EIGS_AdvancedMovementEvent inAdvancedMovementEvent) {
    return true;
}

void UIGS_NetworkComponentCharacter::MessageToClient_Rollback_Implementation(AActor* inActor, float inHealth) const {
}

void UIGS_NetworkComponentCharacter::MessageToAll_WeaponMagCheckInterrupt_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_WeaponMagCheck_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_StopAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_Shoot_Implementation(const TArray<FIGS_NetProjectileData>& inNetProjectileDataList) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_Reload_Implementation(bool inIsCombat, bool inIsEmptyMagazine) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowStart_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowFinish_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnThrowCancel_Implementation(bool inThrowLow) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_OnPlayerSpecialAction_Implementation(EIGS_SpecialActionType inType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_MeleeAttack_Implementation(EIGS_MeleeAttackType inMeleeAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_IsMovingForced_Implementation(bool inIsMovingForced) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_InterruptReload_Implementation(EIGS_ReloadInterruptReasonEnum inInterruptReason, const bool inImmediateInterrupt) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_HitSynchronizedBash_Implementation(const FIGS_BashResultNetwork& inBashData) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_HitSynchronized_Implementation(const FIGS_NetProjectileHitData& inHitData, const FIGS_NetProjectileHitResult& inProjectileHit) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_ChangeShooter_Implementation(EIGS_WeaponAttackType inAttackType) {
}

void UIGS_NetworkComponentCharacter::MessageToAll_BeginAttack_Implementation() {
}

void UIGS_NetworkComponentCharacter::MessageToAll_AdvancedMovementEvent_Implementation(EIGS_AdvancedMovementEvent inAdvancedMovementEvent) {
}

bool UIGS_NetworkComponentCharacter::IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter) {
    return false;
}

float UIGS_NetworkComponentCharacter::GetVoiceProgress(int32 inGroupID) {
    return 0.000000000e+00f;
}

FIGS_InventoryObjectUniversalData UIGS_NetworkComponentCharacter::GetUniversalDataByItemID(int32 inID) {
    return FIGS_InventoryObjectUniversalData{};
}

float UIGS_NetworkComponentCharacter::GetPlayerBaggedLootWeight() {
    return 0.000000000e+00f;
}

void UIGS_NetworkComponentCharacter::All_ResetVoiceSFX_Implementation(uint16 inGroupID) {
}

void UIGS_NetworkComponentCharacter::All_OnStopVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::All_OnPlayVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}

void UIGS_NetworkComponentCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_AimAtPoint);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LookAtPoint);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CharacterAiming);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_PlayingAnimation);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LootBagInfo);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_FullLootBagInfos);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CharacterState);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_MovementSpeed);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_RequestedLeanSide);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_LeaningDirection);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsMovingForced);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsMantling);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ReplicatedAcceleration);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ReplicatedLadder);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsVisibilityModOn);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_IsRunningAttack);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_ShooterType);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_AvailableWieldables);
    DOREPLIFETIME(UIGS_NetworkComponentCharacter, mR_CurrentSlot);
}

