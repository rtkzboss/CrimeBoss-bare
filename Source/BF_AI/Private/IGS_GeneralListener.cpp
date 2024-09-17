#include "IGS_GeneralListener.h"
#include "Engine/EngineTypes.h"
#include "IGS_GeneralListenerController.h"

AIGS_GeneralListener::AIGS_GeneralListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SupportedHearingTags = {TEXT("Shooting"), TEXT("Explosion")};
    (*this).bStartsActive = true;
    (*this).AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    (*this).AIControllerClass = AIGS_GeneralListenerController::StaticClass();
    (*this).bReplicates = false;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_None);
}

void AIGS_GeneralListener::SetActive(bool Inactive) {
}

bool AIGS_GeneralListener::IsActive() const {
    return false;
}

AIGS_GeneralListener* AIGS_GeneralListener::GetGeneralListener(const UObject* inWCO) {
    return nullptr;
}

