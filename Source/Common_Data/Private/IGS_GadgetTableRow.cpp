#include "IGS_GadgetTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GadgetTableRow::FIGS_GadgetTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ItemType = EIGS_ItemType::Item_Gadget;
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
    (*this).Data.ItemOffence = FGameplayTag::RequestGameplayTag(TEXT("Offence.Actor.Item.Gadget"));
    (*this).Data.GrantedTags = FGameplayTagContainer();
    (*this).Data.GrantedAbilities = {};
    (*this).Data.AppliedEffects = {};
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses = {};
    (*this).Data.AdditionalPreloadObjects = {};
}
