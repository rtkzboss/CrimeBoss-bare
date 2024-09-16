#include "IGS_KeyItemTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_RoomSecurityType.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_KeyItemTableRow::FIGS_KeyItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.KeySecurity = EIGS_RoomSecurityType::Outside;
    (*this).Data.ItemType = EIGS_ItemType::Item_Key;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.Image = FSoftObjectPath();
    (*this).Data.PickupMesh = FSoftObjectPath();
    (*this).Data.PickupMeshSkeletal = FSoftObjectPath();
    (*this).Data.ItemPickUpAudioEvent = FSoftObjectPath();
    (*this).Data.ItemThrowAudioEvent = FSoftObjectPath();
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto gen2 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags");
    (*gen3->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)) = {};
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
