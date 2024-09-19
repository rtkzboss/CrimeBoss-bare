#include "IGS_StealthVoiceovers.h"

UIGS_StealthVoiceovers::UIGS_StealthVoiceovers() {
    (*this).DefaultGuardRadioReactionsForStrikes = TArray<FText>{FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).AmbientReportingEmpToGuard = TArray<FText>{FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).AmbientReportingCivUsingPhones = TArray<FText>{FText::GetEmpty(), FText::GetEmpty(), FText::GetEmpty()};
    (*this).ReactionVoiceoversCooldown = 1.500000000e+00f;
    (*this).ReactionVoiceoversDistanceMaxToPlayer = 2.500000000e+03f;
}

