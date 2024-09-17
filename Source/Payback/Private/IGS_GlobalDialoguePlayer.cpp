#include "IGS_GlobalDialoguePlayer.h"
#include "AkComponent.h"
#include "IGS_NetworkComponentDialogue.h"
#include "Engine/EngineTypes.h"

AIGS_GlobalDialoguePlayer::AIGS_GlobalDialoguePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NetworkComponentDialogue>(TEXT("NetworkComponentDialogue"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).NetworkDialogue = gen;
    (*this).AkComponent = gen2;
    (*this).bReplicates = true;
    (*this).SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen2;
}

