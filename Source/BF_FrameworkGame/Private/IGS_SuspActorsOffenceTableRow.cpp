#include "IGS_SuspActorsOffenceTableRow.h"
#include "EIGS_OffenceType.h"

FIGS_SuspActorsOffenceTableRow::FIGS_SuspActorsOffenceTableRow() {
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).OffenceQuery, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).OffenceQuery, 0)) = {};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).OffenceQuery, 0)) = {};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*this).DetectionSpeedMult = 1.000000000e+00f;
    (*this).AmbientReactionValidOnlyInRestrictedArea = false;
    (*this).RotateToOffenceOwnerPos = false;
    (*this).EventInitialDelay = 8.000000119e-01f;
    (*this).EventLifetime = -1.000000000e+00f;
    (*this).EventNoticedLifetime = -1.000000000e+00f;
    (*this).EternalEvent = false;
    (*this).OffenceType = EIGS_OffenceType::Offence_SuspActors;
    (*this).OffenceNoticedBy = 3;
}
