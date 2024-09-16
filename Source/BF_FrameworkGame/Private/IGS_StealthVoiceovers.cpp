#include "IGS_StealthVoiceovers.h"

UIGS_StealthVoiceovers::UIGS_StealthVoiceovers() {
    (*this).DefaultGuardRadioReactionsForStrikes = {FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).AmbientReportingEmpToGuard = {FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).AmbientReportingCivUsingPhones = {FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).ReactionVoiceoversCooldown = 1.500000000e+00f;
    (*this).ReactionVoiceoversDistanceMaxToPlayer = 2.500000000e+03f;
}

