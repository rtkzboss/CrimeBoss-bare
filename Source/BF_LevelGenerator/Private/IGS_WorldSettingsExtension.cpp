#include "IGS_WorldSettingsExtension.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_WorldSettingsExtension::AIGS_WorldSettingsExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).KillZ = -1.000100000e+04f;
    (*this).bReplicates = false;
    auto gen = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_None;
}

