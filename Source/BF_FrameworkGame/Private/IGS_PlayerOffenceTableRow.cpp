#include "IGS_PlayerOffenceTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_OffenceType.h"

FIGS_PlayerOffenceTableRow::FIGS_PlayerOffenceTableRow() {
    auto gen = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion");
    (*gen->ContainerPtrToValuePtr<int32>(&(*this).OffenceQuery, 0)) = 0;
    auto gen2 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary");
    (*gen2->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).OffenceQuery, 0)) = TArray<FGameplayTag>{};
    auto gen3 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream");
    (*gen3->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).OffenceQuery, 0)) = TArray<uint8>{};
    auto gen4 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription");
    (*gen4->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    auto gen5 = TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription");
    (*gen5->ContainerPtrToValuePtr<FString>(&(*this).OffenceQuery, 0)) = TEXT("");
    (*this).DetectionSpeedMult = 1.000000000e+00f;
    (*this).OffenceType = EIGS_OffenceType::Offence_Player;
    (*this).OffenceNoticedBy = 3;
}
