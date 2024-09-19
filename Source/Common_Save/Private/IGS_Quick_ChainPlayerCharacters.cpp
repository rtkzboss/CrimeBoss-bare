#include "IGS_Quick_ChainPlayerCharacters.h"

FIGS_Quick_ChainPlayerCharacters::FIGS_Quick_ChainPlayerCharacters() {
    (*this).PlayerId = 0;
    auto gen = TBaseStructure<FUniqueNetIdRepl>::Get()->FindPropertyByName("ReplicationBytes");
    (*gen->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).UniquePlayerId, 0)) = TArray<uint8>{};
    (*this).Heisters = TArray<FCommonHeisterData>{};
}
