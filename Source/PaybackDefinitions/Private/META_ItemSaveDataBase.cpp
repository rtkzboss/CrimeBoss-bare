#include "META_ItemSaveDataBase.h"

FMETA_ItemSaveDataBase::FMETA_ItemSaveDataBase() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*this).Price = 0;
    (*this).RelativePrice = 0.000000000e+00f;
    (*this).IsUnseenInShop = false;
}
