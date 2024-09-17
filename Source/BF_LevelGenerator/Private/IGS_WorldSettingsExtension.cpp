#include "IGS_WorldSettingsExtension.h"
#include "Engine/EngineTypes.h"

AIGS_WorldSettingsExtension::AIGS_WorldSettingsExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).KillZ = -1.000100000e+04f;
    (*this).bReplicates = false;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_None);
}

