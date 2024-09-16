#include "IGS_LootItemTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"

FIGS_LootItemTableRow::FIGS_LootItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.LootSize = EIGS_LootSize::Medium;
    (*this).Data.SmallHits = false;
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategoryTag, 0)) = TEXT("Loot.None");
    (*this).Data.StandMesh = FSoftObjectPath();
    (*this).Data.ItemWeight = EIGS_ItemWeight::Light;
    (*this).Data.ItemType = EIGS_ItemType::Item_Loot;
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
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Valuable");
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
