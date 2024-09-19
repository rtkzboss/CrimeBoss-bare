#include "IGS_MeleePushAnimDatabase.h"

FIGS_MeleePushAnimDatabase::FIGS_MeleePushAnimDatabase() {
    (*this).ID = FGameplayTag::RequestGameplayTag(TEXT("Anim.Push.Unknown"));
    (*this).AnimVariations = TArray<UAnimMontage*>{};
}
