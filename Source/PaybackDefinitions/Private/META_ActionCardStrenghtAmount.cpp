#include "META_ActionCardStrenghtAmount.h"

FMETA_ActionCardStrenghtAmount::FMETA_ActionCardStrenghtAmount() {
    (*this).Amount = TMap<EMETA_ActionCardStrength, int32>{};
}
