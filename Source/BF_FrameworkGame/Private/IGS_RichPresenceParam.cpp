#include "IGS_RichPresenceParam.h"

FIGS_RichPresenceParam::FIGS_RichPresenceParam() {
    auto gen = TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName");
    (*gen->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Int = -1;
    (*this).Float = -1.000000000e+00f;
    (*this).Text = FText::GetEmpty();
}
