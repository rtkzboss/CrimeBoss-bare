#include "IGS_CharacterClasses.h"

FIGS_CharacterClasses::FIGS_CharacterClasses() {
    (*this).bIsMale = true;
    (*this).bIsMutable = false;
    (*this).MutableProfile = FSoftObjectPath();
    (*this).PlayerPawnClass = FSoftObjectPath();
    (*this).BotPawnClass = FSoftObjectPath();
    (*this).PaperDollClass = FSoftObjectPath();
    (*this).FPVArmsClass = FSoftObjectPath();
    (*this).CharacterIcon = FSoftObjectPath();
    (*this).MetaCharacterIcon = FSoftObjectPath();
    (*this).VariantName = FText::GetEmpty();
    (*this).VariantDescription = FText::GetEmpty();
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}
