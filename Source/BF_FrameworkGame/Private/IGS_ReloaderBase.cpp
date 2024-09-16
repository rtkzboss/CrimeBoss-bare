#include "IGS_ReloaderBase.h"

UIGS_ReloaderBase::UIGS_ReloaderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_ReloaderBase::Reload() {
}

void UIGS_ReloaderBase::OnReloadFinished() {
}

void UIGS_ReloaderBase::OnAddAmmoToWeapon() {
}

bool UIGS_ReloaderBase::IsReloading() const {
    return false;
}

void UIGS_ReloaderBase::InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce) {
}

float UIGS_ReloaderBase::GetCurrentReloadSpeed(bool inIsCombat, bool inIsEmptyMagazine) {
    return 0.000000000e+00f;
}

bool UIGS_ReloaderBase::CanReload() {
    return false;
}

bool UIGS_ReloaderBase::CanBeInterrupted() const {
    return false;
}

