#include "IGS_LootItemTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"
#include "IGS_GameplayAbilityGrantDataHolder.h"
#include "IGS_GameplayEffectApplyDataHolder.h"

class UObject;

FIGS_LootItemTableRow::FIGS_LootItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.LootSize = EIGS_LootSize::Medium;
    (*this).Data.SmallHits = false;
    (*this).Data.LootCategoryTag = FGameplayTag::RequestGameplayTag(TEXT("Loot.None"));
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
    (*this).Data.ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Valuable"));
    (*this).Data.GrantedTags = FGameplayTagContainer();
    (*this).Data.GrantedAbilities = TArray<FIGS_GameplayAbilityGrantDataHolder>{};
    (*this).Data.AppliedEffects = TArray<FIGS_GameplayEffectApplyDataHolder>{};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = TArray<TSoftClassPtr<UObject>>{};
    (*this).Data.AdditionalPreloadObjects = TArray<TSoftObjectPtr<UObject>>{};
}
