#include "IGS_AbilityTask_PlayFPVMontageAndWait.h"

UIGS_AbilityTask_PlayFPVMontageAndWait::UIGS_AbilityTask_PlayFPVMontageAndWait() {
    (*this).Rate = 1.000000000e+00f;
    (*this).bStopWhenAbilityEnds = true;
}

void UIGS_AbilityTask_PlayFPVMontageAndWait::OnMontageInterrupted() {
}

void UIGS_AbilityTask_PlayFPVMontageAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UIGS_AbilityTask_PlayFPVMontageAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UIGS_AbilityTask_PlayFPVMontageAndWait* UIGS_AbilityTask_PlayFPVMontageAndWait::CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float StartTimeSeconds) {
    return nullptr;
}

