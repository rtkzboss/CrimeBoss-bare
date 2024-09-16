#include "META_ActionCardID.h"

FMETA_ActionCardID::FMETA_ActionCardID() {
    (*this).ActionCard = FSoftObjectPath();
    (*this).Strength = EMETA_ActionCardStrength::Strength1;
}
