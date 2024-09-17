#include "IGS_CommonItemData.h"

FIGS_CommonItemData::FIGS_CommonItemData() {
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).bShouldMove = true;
    (*this).Image = FSoftObjectPath();
    (*this).PickupMesh = FSoftObjectPath();
    (*this).PickupMeshSkeletal = FSoftObjectPath();
    (*this).ItemPickUpAudioEvent = FSoftObjectPath();
    (*this).ItemThrowAudioEvent = FSoftObjectPath();
    (*this).HitImpactID = nullptr;
    (*this).HitImpactMass = 1.000000000e+00f;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).ItemOffence = FGameplayTag();
    (*this).GrantedTags = FGameplayTagContainer();
    (*this).GrantedAbilities = {};
    (*this).AppliedEffects = {};
    (*this).ItemPropertyFlags = 1;
    (*this).MonetaryValue = 0;
    (*this).ModelScaleFPV = 1.000000000e+00f;
    (*this).ModelScale3PV = 1.000000000e+00f;
    (*this).AdditionalPreloadClasses = {};
    (*this).AdditionalPreloadObjects = {};
}
