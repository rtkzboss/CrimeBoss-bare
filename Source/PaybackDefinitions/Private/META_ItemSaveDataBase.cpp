#include "META_ItemSaveDataBase.h"

FMETA_ItemSaveDataBase::FMETA_ItemSaveDataBase() {
    (*this).itemTag = FGameplayTag();
    (*this).Price = 0;
    (*this).RelativePrice = 0.000000000e+00f;
    (*this).IsUnseenInShop = false;
}
