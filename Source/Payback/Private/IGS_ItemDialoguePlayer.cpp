#include "IGS_ItemDialoguePlayer.h"
#include "AkComponent.h"
#include "IGS_NetworkComponentDialogue.h"
#include "Engine/EngineTypes.h"

AIGS_ItemDialoguePlayer::AIGS_ItemDialoguePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_NetworkComponentDialogue>(TEXT("NetworkComponentDialogue"));
    auto gen2 = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).NetworkDialogue = gen;
    (*this).AkComponent = gen2;
    (*this).bReplicates = true;
    auto gen3 = AActor::StaticClass()->FindPropertyByName("RemoteRole");
    (*gen3->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = gen2;
}

